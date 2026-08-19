#!/bin/bash
set -ex

COMPILER="refal-05/src/main refal-05/src/generator refal-05/src/parser"
FRAMEWORK="refal-5-framework/lib/LibraryEx refal-5-framework/lib/R5FW-Parser refal-5-framework/lib/R5FW-Plainer refal-5-framework/lib/R5FW-Transformer refal-5-framework/lib/posix/Platform"
LIBS="refal-05/lib/refal05bif refal-05/lib/refal05rts"

COMPILER_CFILES="bootstrap/main.c bootstrap/generator.c bootstrap/parser.c"
FRAMEWORK_CFILES="bootstrap/LibraryEx.c bootstrap/R5FW-Parser.c bootstrap/R5FW-Plainer.c bootstrap/R5FW-Transformer.c bootstrap/Platform.c"
LIBS_CFILES="refal-05/lib/refal05bif.c refal-05/lib/refal05rts.c"
LIBS_INCLUDE="-Irefal-05/lib"

for SUBMODULE in refal-05 refal-5-framework; do
  if [ ! -e "$SUBMODULE/README.md" ]; then
    git submodule update --init "$SUBMODULE" \
      || { echo "Submodule $SUBMODULE is missing and could not be fetched. Run: git submodule update --init"; exit 1; }
  fi
done

set -a; source ./c-plus-plus.conf.sh set +a;

echo "Configured compiler: R05CCOMP=${R05CCOMP}"

echo "1. Build bin/refal05c-old from bootstrap/"
${R05CCOMP} ${LIBS_INCLUDE} -DR05_SHOW_STAT -o bin/refal05c-old ${COMPILER_CFILES} ${FRAMEWORK_CFILES} ${LIBS_CFILES}

echo "2. Generate new bootstrap/ with bin/refal05c-old"
rm ${COMPILER_CFILES} ${FRAMEWORK_CFILES}
R05CCOMP= R05PATH= bin/refal05c-old ${COMPILER} ${FRAMEWORK} ${LIBS}
mv *.c bootstrap

echo "3. Build bin/refal05c from new bootstrap/"
${R05CCOMP} ${LIBS_INCLUDE} -DR05_SHOW_STAT -o bin/refal05c ${COMPILER_CFILES} ${FRAMEWORK_CFILES} ${LIBS_CFILES}

echo "4. Run autotests for bin/refal05c"
./autotests/run.sh

echo "Compiler bootstrapped successfully"
