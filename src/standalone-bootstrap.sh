#!/bin/bash
set -ex

MODULES="src/main src/generator src/parser"
FRAMEWORK="framework/lib/LibraryEx framework/lib/R5FW-Parser framework/lib/R5FW-Plainer framework/lib/R5FW-Transformer framework/lib/posix/Platform"
LIBS="./lib/refal05bif ./lib/refal05rts"

MODULES_CFILES="bootstrap/main.c bootstrap/generator.c bootstrap/parser.c"
FRAMEWORK_CFILES="bootstrap/LibraryEx.c bootstrap/R5FW-Parser.c bootstrap/R5FW-Plainer.c bootstrap/R5FW-Transformer.c bootstrap/Platform.c"
LIBS_CFILES="./lib/refal05bif.c ./lib/refal05rts.c"
LIBS_INCLUDE="-I./lib"

if [ ! -e framework/lib/R5FW-Parser.ref ]; then
  git submodule update --init framework \
    || { echo "The framework submodule is missing and could not be fetched. Run: git submodule update --init"; exit 1; }
fi

set -a; source ./c-plus-plus.conf.sh set +a;

echo "Configured compiler: R05CCOMP=${R05CCOMP}"

echo "1. Build bin/refal05c-old from bootstrap/"
${R05CCOMP} ${LIBS_INCLUDE} -DR05_SHOW_STAT -o bin/refal05c-old ${MODULES_CFILES} ${FRAMEWORK_CFILES} ${LIBS_CFILES}

echo "2. Generate new bootstrap/ with bin/refal05c-old"
rm ${MODULES_CFILES} ${FRAMEWORK_CFILES}
R05CCOMP= R05PATH= bin/refal05c-old ${MODULES} ${FRAMEWORK} ${LIBS}
mv *.c bootstrap

echo "3. Build bin/refal05c from new bootstrap/"
${R05CCOMP} ${LIBS_INCLUDE} -DR05_SHOW_STAT -o bin/refal05c ${MODULES_CFILES} ${FRAMEWORK_CFILES} ${LIBS_CFILES}

echo "4. Run autotests for bin/refal05c"
./autotests/run.sh

echo "Compiler bootstrapped successfully"
