#!/bin/bash

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
TESTS_DIR="$PROJECT_ROOT/refal-05/autotests"
WORK_DIR="$PROJECT_ROOT/.testrun/autotests"
COMPILER="$PROJECT_ROOT/bin/refal05c"
RUNTIME_DIR="$PROJECT_ROOT/refal-05/lib"

source "$PROJECT_ROOT/c-plus-plus.conf.sh"

if [ ! -x "$COMPILER" ]; then
    echo "Compiler not found: $COMPILER"
    exit 1
fi

if [ ! -d "$TESTS_DIR" ]; then
    echo "Tests not found: $TESTS_DIR. Run: git submodule update --init"
    exit 1
fi

rm -rf "$PROJECT_ROOT/.testrun"
mkdir -p "$WORK_DIR"
cd "$WORK_DIR"

echo "Running Refal-05 autotests"
echo ""

run_test() {
    local TEST=$1
    local BASENAME="${TEST%.ref}"
    local EXIT_CODE

    echo "Testing: $TEST"

    R05CCOMP= R05PATH= "$COMPILER" "$TESTS_DIR/$TEST" 2>__error.txt
    EXIT_CODE=$?

    if [[ "$TEST" == *.BAD-SYNTAX.ref ]]; then
        if [ $EXIT_CODE -ge 200 ]; then
            echo "  FAILED: compiler crashed, exit code $EXIT_CODE"
            cat __error.txt
            return 1
        fi
        if [ -e "$BASENAME.c" ]; then
            echo "  FAILED: expected a syntax error, but compilation succeeded"
            return 1
        fi
        echo "  OK"
        return 0
    fi

    if [ $EXIT_CODE -ne 0 ]; then
        echo "  FAILED: compilation of $TEST failed, exit code $EXIT_CODE"
        cat __error.txt
        return 1
    fi

    if [ ! -e "$BASENAME.c" ]; then
        echo "  FAILED: compiler produced no $BASENAME.c"
        return 1
    fi

    local SATELLITE_C=()
    if [ -e "$TESTS_DIR/$BASENAME.SATELLITE.ref" ]; then
        if ! R05CCOMP= R05PATH= "$COMPILER" "$TESTS_DIR/$BASENAME.SATELLITE.ref"; then
            echo "  FAILED: compilation of $BASENAME.SATELLITE.ref failed"
            return 1
        fi
        SATELLITE_C=("$BASENAME.SATELLITE.c")
    fi

    if ! $R05CCOMP -I"$RUNTIME_DIR" -o"$BASENAME" "$BASENAME.c" "${SATELLITE_C[@]}" \
            "$RUNTIME_DIR/refal05bif.c" "$RUNTIME_DIR/refal05rts.c" > __cc.txt 2>&1; then
        echo "  FAILED: C compilation failed"
        cat __cc.txt
        return 1
    fi

    ./"$BASENAME" > /dev/null 2> __dump.txt
    EXIT_CODE=$?
    if [ $EXIT_CODE -ne 0 ]; then
        echo "  FAILED: test run exited with code $EXIT_CODE"
        cat __dump.txt
        return 1
    fi

    echo "  OK"
    return 0
}

FAILED=0
PASSED=0
FAILED_TESTS=()

if [ $# -eq 0 ]; then
    TESTS=()
    for T in "$TESTS_DIR"/*.ref; do TESTS+=("$(basename "$T")"); done
else
    TESTS=("$@")
fi

for TEST in "${TESTS[@]}"; do
    [[ "$TEST" == *.SATELLITE.ref ]] && continue

    if run_test "$TEST"; then
        PASSED=$((PASSED + 1))
    else
        FAILED=$((FAILED + 1))
        FAILED_TESTS+=("$TEST")
    fi
    rm -f ./*.c ./__error.txt ./__cc.txt ./__dump.txt
    find . -maxdepth 1 -type f -perm -u+x -delete
done

cd "$PROJECT_ROOT"
rm -rf "$PROJECT_ROOT/.testrun"

echo ""
echo "Autotests finished"
echo "Passed: $PASSED, Failed: $FAILED"

if [ $FAILED -ne 0 ]; then
    printf 'Failed tests:\n'
    printf '  %s\n' "${FAILED_TESTS[@]}"
    exit 1
fi
