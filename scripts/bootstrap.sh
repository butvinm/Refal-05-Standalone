#!/bin/bash
set -ex

# Статистика раскрутки: -n шаги, -t время, -s пиковая память, -l20 предел поля зрения в мегабайтах.
# Те же опции передаёт refal-05/src/makeself.sh. До bd7cc28 статистику включал -DR05_SHOW_STAT,
# но этого макроса в runtime больше нет: отладочные средства управляются командной строкой.
OPTIONS="-nts -l20"

COMPILER="refal-05/src/main refal-05/src/generator refal-05/src/parser"
FRAMEWORK="refal-5-framework/lib/LibraryEx refal-5-framework/lib/R5FW-Parser refal-5-framework/lib/R5FW-Plainer refal-5-framework/lib/R5FW-Transformer refal-5-framework/lib/posix/Platform"

# Каталог bootstrap/ самодостаточен: восемь порождённых C-файлов плюс refal05rts.h, refal05rts.c и refal05bif.c той ревизии runtime, для которой они порождены.
# Старый компилятор собирается из него одного, и новый заголовок из подмодуля его не касается.
RUNTIME="refal05rts.h refal05rts.c refal05bif.c"
STAGE2=bin/stage2

for SUBMODULE in refal-05 refal-5-framework; do
  if [ ! -e "$SUBMODULE/README.md" ]; then
    git submodule update --init "$SUBMODULE" \
      || { echo "Submodule $SUBMODULE is missing and could not be fetched. Run: git submodule update --init"; exit 1; }
  fi
done

set -a; source ./c-plus-plus.conf.sh set +a;

echo "Configured compiler: R05CCOMP=${R05CCOMP}"

echo "1. Build bin/refal05c-old from bootstrap/ alone"
${R05CCOMP} -Ibootstrap -o bin/refal05c-old bootstrap/*.c

echo "2. Compile the new sources with bin/refal05c-old"
# Старый генератор порождает C под старый runtime, поэтому этот текст в bootstrap/ не попадает.
rm -rf ${STAGE2}
mkdir -p ${STAGE2}
R05CCOMP= R05PATH= bin/refal05c-old ${OPTIONS} ${COMPILER} ${FRAMEWORK}
mv ./*.c ${STAGE2}

echo "3. Build bin/refal05c-mid against the old runtime from bootstrap/"
# Промежуточный компилятор уже несёт новый генератор, но собран из C старого генератора, поэтому линкуется с тем runtime, для которого этот C порождён.
${R05CCOMP} -Ibootstrap -o bin/refal05c-mid ${STAGE2}/*.c bootstrap/refal05bif.c bootstrap/refal05rts.c

echo "4. Generate new bootstrap/ with bin/refal05c-mid"
# Теперь C порождён новым генератором, и рядом кладётся runtime той же ревизии.
R05CCOMP= R05PATH= bin/refal05c-mid ${OPTIONS} ${COMPILER} ${FRAMEWORK}
rm -f bootstrap/*.c bootstrap/*.h
mv ./*.c bootstrap
for FILE in ${RUNTIME}; do cp "refal-05/lib/${FILE}" bootstrap; done

echo "5. Build bin/refal05c from new bootstrap/"
${R05CCOMP} -Ibootstrap -o bin/refal05c bootstrap/*.c

echo "6. Run autotests for bin/refal05c"
./scripts/autotests.sh

echo "Compiler bootstrapped successfully"
