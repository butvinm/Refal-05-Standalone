#!/bin/bash
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"

cd "$SCRIPT_DIR"

source "$PROJECT_ROOT/c-plus-plus.conf.sh"

echo "Running Refal-05 autotests"
echo ""

run_test() {
    local TEST=$1
    local BASENAME="${TEST%.ref}"

    echo "Testing: $TEST"

    set +e
    R05CCOMP= R05PATH= "$PROJECT_ROOT/bin/refal05" "$TEST" 2>__error.txt
    local EXIT_CODE=$?
    set -e

    if [[ "$TEST" == *.BAD-SYNTAX.ref ]]; then
        if [ $EXIT_CODE -ge 200 ]; then
            echo "  FAILED: Compiler crashed (exit code $EXIT_CODE)"
            cat __error.txt
            rm -f __error.txt
            return 1
        fi
        if [ -e "$BASENAME.c" ]; then
            echo "  FAILED: Expected syntax error but compilation succeeded"
            rm -f "$BASENAME.c" __error.txt
            return 1
        fi
        echo "  OK"
        rm -f __error.txt
        return 0
    fi

    rm -f __error.txt

    if [ -e "$BASENAME.SATELLITE.ref" ]; then
        R05CCOMP= R05PATH= "$PROJECT_ROOT/bin/refal05" "$BASENAME.SATELLITE.ref"
    fi

    $R05CCOMP -I"$PROJECT_ROOT/lib" -o"$BASENAME" "$BASENAME.c" $BASENAME.SATELLITE.c \
        "$PROJECT_ROOT/lib/Library.c" "$PROJECT_ROOT/lib/refal05rts.c" 2>/dev/null

    ./"$BASENAME" >/dev/null 2>&1

    rm -f "$BASENAME.c" "$BASENAME" "$BASENAME.SATELLITE.c"

    echo "  OK"
    return 0
}

FAILED=0
PASSED=0

if [ -z "$1" ]; then
    TESTS="*.ref"
else
    TESTS="$@"
fi

for TEST in $TESTS; do
    [[ "$TEST" == *.SATELLITE.ref ]] && continue

    if run_test "$TEST"; then
        PASSED=$((PASSED + 1))
    else
        FAILED=$((FAILED + 1))
    fi
done

echo ""
echo "Autotests finished"
echo "Passed: $PASSED, Failed: $FAILED"

[ $FAILED -eq 0 ] || exit 1
