@echo off
setlocal enabledelayedexpansion

set SCRIPT_DIR=%~dp0
set PROJECT_ROOT=%SCRIPT_DIR%..
cd /d %SCRIPT_DIR%

call "%PROJECT_ROOT%\c-plus-plus.conf.bat"
if errorlevel 1 exit /b 1

echo Running Refal-05 autotests
echo.

set FAILED=0
set PASSED=0

if "%~1"=="" (
    for %%f in (*.ref) do call :RUN_TEST "%%f"
) else (
    :LOOP
    if not "%~1"=="" (
        call :RUN_TEST "%~1"
        shift
        goto LOOP
    )
)

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
"%PROJECT_ROOT%\bin\refal05.exe" "%TEST%" 2>__error.txt
set EXIT_CODE=!errorlevel!
set R05CCOMP=%R05CCOMP_SAVE%

echo %TEST% | findstr /C:".BAD-SYNTAX.ref" >nul
if not errorlevel 1 (
    if !EXIT_CODE! geq 200 (
        echo   FAILED: Compiler crashed ^(exit code !EXIT_CODE!^)
        type __error.txt
        del __error.txt
        set /a FAILED+=1
        exit /b 0
    )
    if exist "%BASENAME%.c" (
        echo   FAILED: Expected syntax error but compilation succeeded
        del "%BASENAME%.c" __error.txt
        set /a FAILED+=1
        exit /b 0
    )
    echo   OK
    del __error.txt
    set /a PASSED+=1
    exit /b 0
)

del __error.txt

if exist "%BASENAME%.SATELLITE.ref" (
    set R05CCOMP_SAVE=%R05CCOMP%
    set R05CCOMP=
    set R05PATH=
    "%PROJECT_ROOT%\bin\refal05.exe" "%BASENAME%.SATELLITE.ref"
    set R05CCOMP=%R05CCOMP_SAVE%
    set SATELLITEC=%BASENAME%.SATELLITE.c
) else (
    set SATELLITEC=
)

%R05CCOMP% -I"%PROJECT_ROOT%\lib" -o"%BASENAME%.exe" "%BASENAME%.c" !SATELLITEC! "%PROJECT_ROOT%\lib\Library.c" "%PROJECT_ROOT%\lib\refal05rts.c" >nul 2>&1
if errorlevel 1 (
    echo   FAILED: C compilation failed
    set /a FAILED+=1
    exit /b 0
)

"%BASENAME%.exe" >nul 2>&1
if errorlevel 1 (
    echo   FAILED: Test execution failed
    set /a FAILED+=1
    exit /b 0
)

del "%BASENAME%.c" "%BASENAME%.exe" !SATELLITEC! 2>nul
if exist *.obj del *.obj
if exist *.tds del *.tds

echo   OK
set /a PASSED+=1
exit /b 0
