@echo off
setlocal enabledelayedexpansion

set SCRIPT_DIR=%~dp0
set PROJECT_ROOT=%SCRIPT_DIR%..
set TESTS_DIR=%PROJECT_ROOT%\refal-05\autotests
set WORK_DIR=%PROJECT_ROOT%\.testrun\autotests
set COMPILER=%PROJECT_ROOT%\bin\refal05c.exe
set RUNTIME_DIR=%PROJECT_ROOT%\refal-05\lib

call "%PROJECT_ROOT%\c-plus-plus.conf.cmd"
if errorlevel 1 exit /b 1

if not exist "%COMPILER%" (
    echo Compiler not found: %COMPILER%
    exit /b 1
)

if not exist "%TESTS_DIR%" (
    echo Tests not found: %TESTS_DIR%. Run: git submodule update --init
    exit /b 1
)

if exist "%PROJECT_ROOT%\.testrun" rd /s /q "%PROJECT_ROOT%\.testrun"
mkdir "%WORK_DIR%"
cd /d "%WORK_DIR%"

echo Running Refal-05 autotests
echo.

set FAILED=0
set PASSED=0

for %%f in ("%TESTS_DIR%\*.ref") do call :RUN_TEST "%%~nxf"

cd /d "%PROJECT_ROOT%"
rd /s /q "%PROJECT_ROOT%\.testrun"

echo.
echo Autotests finished
echo Passed: %PASSED%, Failed: %FAILED%

if %FAILED% gtr 0 exit /b 1
exit /b 0

:RUN_TEST
set TEST=%~1
set BASENAME=%~n1

echo %TEST% | findstr /C:".SATELLITE.ref" >nul
if not errorlevel 1 exit /b 0

echo Testing: %TEST%

set R05CCOMP_SAVE=%R05CCOMP%
set R05CCOMP=
set R05PATH=
"%COMPILER%" "%TESTS_DIR:\=/%/%TEST%" 2>__error.txt
set EXIT_CODE=!errorlevel!
set R05CCOMP=%R05CCOMP_SAVE%

echo %TEST% | findstr /C:".BAD-SYNTAX.ref" >nul
if not errorlevel 1 (
    if !EXIT_CODE! geq 200 (
        echo   FAILED: compiler crashed ^(exit code !EXIT_CODE!^)
        type __error.txt
        call :CLEANUP
        set /a FAILED+=1
        exit /b 0
    )
    if exist "%BASENAME%.c" (
        echo   FAILED: expected a syntax error, but compilation succeeded
        call :CLEANUP
        set /a FAILED+=1
        exit /b 0
    )
    echo   OK
    call :CLEANUP
    set /a PASSED+=1
    exit /b 0
)

if !EXIT_CODE! neq 0 (
    echo   FAILED: compilation of %TEST% failed ^(exit code !EXIT_CODE!^)
    type __error.txt
    call :CLEANUP
    set /a FAILED+=1
    exit /b 0
)

if not exist "%BASENAME%.c" (
    echo   FAILED: compiler produced no %BASENAME%.c
    call :CLEANUP
    set /a FAILED+=1
    exit /b 0
)

set SATELLITEC=
if exist "%TESTS_DIR%\%BASENAME%.SATELLITE.ref" (
    set R05CCOMP_SAVE=%R05CCOMP%
    set R05CCOMP=
    set R05PATH=
    "%COMPILER%" "%TESTS_DIR:\=/%/%BASENAME%.SATELLITE.ref"
    set R05CCOMP=%R05CCOMP_SAVE%
    set SATELLITEC=%BASENAME%.SATELLITE.c
)

%R05CCOMP% -I"%RUNTIME_DIR%" -o"%BASENAME%.exe" "%BASENAME%.c" !SATELLITEC! "%RUNTIME_DIR%\refal05bif.c" "%RUNTIME_DIR%\refal05rts.c" >__cc.txt 2>&1
if errorlevel 1 (
    echo   FAILED: C compilation failed
    type __cc.txt
    call :CLEANUP
    set /a FAILED+=1
    exit /b 0
)

"%BASENAME%.exe" >nul 2>__dump.txt
if errorlevel 1 (
    echo   FAILED: test run failed
    type __dump.txt
    call :CLEANUP
    set /a FAILED+=1
    exit /b 0
)

call :CLEANUP
echo   OK
set /a PASSED+=1
exit /b 0

:CLEANUP
if exist *.c del /q *.c
if exist *.exe del /q *.exe
if exist *.obj del /q *.obj
if exist __error.txt del /q __error.txt
if exist __cc.txt del /q __cc.txt
if exist __dump.txt del /q __dump.txt
exit /b 0
