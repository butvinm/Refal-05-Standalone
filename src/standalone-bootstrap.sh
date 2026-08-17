#!/bin/bash
set -ex

MODULES="src/main src/generator src/parser"
LIBS="./lib/refal05bif ./lib/refal05rts"

MODULES_CFILES="bootstrap/main.c bootstrap/generator.c bootstrap/parser.c"
R5FW_CFILES="bootstrap/R5FW-Parser-Defs.c bootstrap/R5FW-Plainer.c bootstrap/Platform.c bootstrap/LibraryEx.c bootstrap/R5FW-Parser.c bootstrap/R5FW-Transformer.c"
LIBS_CFILES="./lib/refal05bif.c ./lib/refal05rts.c"
LIBS_INCLUDE="-I./lib"

set -a; source ./c-plus-plus.conf.sh set +a;

echo "Configured compiler: R05CCOMP=${R05CCOMP}"

echo "1. Build bin/refal05c-old from bootstrap/"
${R05CCOMP} ${LIBS_INCLUDE} -DR05_SHOW_STAT -o bin/refal05c-old ${MODULES_CFILES} ${R5FW_CFILES} ${LIBS_CFILES}

echo "2. Generate new bootstrap/ with bin/refal05c-old"
rm ${MODULES_CFILES}
R05CCOMP= R05PATH= bin/refal05c-old ${MODULES} ${LIBS}
mv *.c bootstrap

echo "3. Build bin/refal05c from new bootstrap/"
${R05CCOMP} ${LIBS_INCLUDE} -DR05_SHOW_STAT -o bin/refal05c ${MODULES_CFILES} ${R5FW_CFILES} ${LIBS_CFILES}

echo "4. Run autotests for bin/refal05c"
./autotests/run.sh

echo "Compiler bootstrapped successfully"
