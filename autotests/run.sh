#!/bin/bash

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"

cd "$SCRIPT_DIR"

source "$PROJECT_ROOT/c-plus-plus.conf.sh"

COMPILER="$PROJECT_ROOT/bin/refal05c"

if [ ! -x "$COMPILER" ]; then
    echo "Compiler not found: $COMPILER"
    exit 1
fi

echo "Running Refal-05 autotests"
echo ""

run_test() {
    local TEST=$1
    local BASENAME="${TEST%.ref}"
    local EXIT_CODE

    echo "Testing: $TEST"

    R05CCOMP= R05PATH= "$COMPILER" "$TEST" 2>__error.txt
    EXIT_CODE=$?

    if [[ "$TEST" == *.BAD-SYNTAX.ref ]]; then
        if [ $EXIT_CODE -ge 200 ]; then
            echo "  FAILED: compiler crashed, exit code $EXIT_CODE"
            cat __error.txt
            rm -f __error.txt
            return 1
        fi
        if [ -e "$BASENAME.c" ]; then
            echo "  FAILED: expected a syntax error, but compilation succeeded"
            rm -f "$BASENAME.c" __error.txt
            return 1
        fi
        echo "  OK"
        rm -f __error.txt
        return 0
    fi

    if [ $EXIT_CODE -ne 0 ]; then
        echo "  FAILED: compilation of $TEST failed, exit code $EXIT_CODE"
        cat __error.txt
        rm -f __error.txt
        return 1
    fi
    rm -f __error.txt

    if [ ! -e "$BASENAME.c" ]; then
        echo "  FAILED: compiler produced no $BASENAME.c"
        return 1
    fi

    local SATELLITE_C=()
    if [ -e "$BASENAME.SATELLITE.ref" ]; then
        if ! R05CCOMP= R05PATH= "$COMPILER" "$BASENAME.SATELLITE.ref"; then
            echo "  FAILED: compilation of $BASENAME.SATELLITE.ref failed"
            rm -f "$BASENAME.c"
            return 1
        fi
        SATELLITE_C=("$BASENAME.SATELLITE.c")
    fi

    if ! $R05CCOMP -I"$PROJECT_ROOT/lib" -o"$BASENAME" "$BASENAME.c" "${SATELLITE_C[@]}" \
            "$PROJECT_ROOT/lib/refal05bif.c" "$PROJECT_ROOT/lib/refal05rts.c" > __cc.txt 2>&1; then
        echo "  FAILED: C compilation failed"
        cat __cc.txt
        rm -f "$BASENAME.c" "${SATELLITE_C[@]}" __cc.txt
        return 1
    fi
    rm -f __cc.txt

    ./"$BASENAME" > /dev/null 2> __dump.txt
    EXIT_CODE=$?
    if [ $EXIT_CODE -ne 0 ]; then
        echo "  FAILED: test run exited with code $EXIT_CODE"
        cat __dump.txt
        rm -f "$BASENAME.c" "$BASENAME" "${SATELLITE_C[@]}" __dump.txt
        return 1
    fi

    rm -f "$BASENAME.c" "$BASENAME" "${SATELLITE_C[@]}" __dump.txt
    echo "  OK"
    return 0
}

FAILED=0
PASSED=0
FAILED_TESTS=()

if [ $# -eq 0 ]; then
    TESTS=(*.ref)
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
done

echo ""
echo "Autotests finished"
echo "Passed: $PASSED, Failed: $FAILED"

if [ $FAILED -ne 0 ]; then
    printf 'Failed tests:\n'
    printf '  %s\n' "${FAILED_TESTS[@]}"
    exit 1
fi
