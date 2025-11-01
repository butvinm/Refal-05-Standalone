#!/bin/bash
set -ex

MODULES="src/refal05c src/R05-CompilerUtils src/R05-Generator src/R05-Parser"
LIBS="./lib/Library ./lib/refal05rts"

MODULES_CFILES="bootstrap/refal05c.c bootstrap/R05-Generator.c bootstrap/R05-CompilerUtils.c bootstrap/R05-Parser.c"
R5FW_CFILES="bootstrap/R5FW-Parser-Defs.c bootstrap/R5FW-Plainer.c bootstrap/Platform.c bootstrap/LibraryEx.c bootstrap/R5FW-Parser.c bootstrap/R5FW-Transformer.c"
LIBS_CFILES="./lib/Library.c ./lib/refal05rts.c"
LIBS_INCLUDE="-I./lib"

set -a; source ./c-plus-plus.conf.sh set +a;

echo "Configured compiler: R05CCOMP=${R05CCOMP}"

echo "1. Build bin/refal05-old from bootstrap/"
${R05CCOMP} ${LIBS_INCLUDE} -DR05_SHOW_STAT -o bin/refal05-old ${MODULES_CFILES} ${R5FW_CFILES} ${LIBS_CFILES}

echo "2. Generate new bootstrap/ with bin/refal05-old"
rm ${MODULES_CFILES}
R05CCOMP= R05PATH= bin/refal05-old ${MODULES} ${LIBS}
mv *.c bootstrap

echo "3. Build bin/refal05 from new bootstrap/"
${R05CCOMP} ${LIBS_INCLUDE} -DR05_SHOW_STAT -o bin/refal05 ${MODULES_CFILES} ${R5FW_CFILES} ${LIBS_CFILES}

echo "4. Run autotests for bin/refal05"
./autotests/run.sh

echo "Compiler bootstrapped successfully"
