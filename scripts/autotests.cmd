@echo off
setlocal DisableDelayedExpansion

rem Имена тестов содержат %PATH%, !PATH!, $PATH, апострофы и пробелы.
rem Поэтому отложенное раскрытие выключено, а имя теста живёт только в переменной TEST и раскрывается через %TEST% ровно один раз.
rem Передавать имя аргументом call нельзя: call раскрывает %...% в аргументах повторно, и %PATH% в имени превращается в значение PATH.

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

for %%f in ("%TESTS_DIR%\*.ref") do (
    set "TEST=%%~nxf"
    call :RUN_TEST
)

cd /d "%PROJECT_ROOT%"
rd /s /q "%PROJECT_ROOT%\.testrun"

echo.
echo Autotests finished
echo Passed: %PASSED%, Failed: %FAILED%

if %FAILED% gtr 0 exit /b 1
exit /b 0

:RUN_TEST
for %%s in ("%TEST%") do set "BASENAME=%%~ns"
for %%s in ("%BASENAME%") do set "KIND=%%~xs"

if /I "%KIND%"==".SATELLITE" exit /b 0

for %%s in ("%TEST%") do echo Testing: %%~s

if /I "%KIND%"==".INT" goto :RUN_INT_TEST

set R05CCOMP_SAVE=%R05CCOMP%
set R05CCOMP=
set R05PATH=
"%COMPILER%" "%TESTS_DIR:\=/%/%TEST%" 2>__error.txt
set EXIT_CODE=%errorlevel%
set R05CCOMP=%R05CCOMP_SAVE%

if /I not "%KIND%"==".BAD-SYNTAX" goto :CHECK_COMPILED

if %EXIT_CODE% geq 200 (
    echo   FAILED: compiler crashed ^(exit code %EXIT_CODE%^)
    type __error.txt
    goto :FAIL
)
if exist "%BASENAME%.c" (
    echo   FAILED: expected a syntax error, but compilation succeeded
    goto :FAIL
)
goto :PASS

:CHECK_COMPILED
if %EXIT_CODE% neq 0 (
    echo   FAILED: compilation failed ^(exit code %EXIT_CODE%^)
    type __error.txt
    goto :FAIL
)

if not exist "%BASENAME%.c" (
    echo   FAILED: compiler produced no C file
    goto :FAIL
)

set SATELLITEC=
if not exist "%TESTS_DIR%\%BASENAME%.SATELLITE.ref" goto :COMPILE_C
set R05CCOMP=
"%COMPILER%" "%TESTS_DIR:\=/%/%BASENAME%.SATELLITE.ref"
set R05CCOMP=%R05CCOMP_SAVE%
set SATELLITEC="%BASENAME%.SATELLITE.c"

:COMPILE_C
%R05CCOMP% -I"%RUNTIME_DIR%" -o"%BASENAME%.exe" "%BASENAME%.c" %SATELLITEC% "%RUNTIME_DIR%\refal05bif.c" "%RUNTIME_DIR%\refal05rts.c" >__cc.txt 2>&1
if errorlevel 1 (
    echo   FAILED: C compilation failed
    type __cc.txt
    goto :FAIL
)
goto :RUN_EXE

rem Интеграционный тест .INT.ref: компилятор сам вызывает компилятор C через R05CCOMP, как у пользователя,
rem поэтому проверяется и то, как он экранирует имена файлов в командной строке.
rem R05CFLAGS попадает в командную строку как есть, поэтому имя исполняемого файла через него не задаётся:
rem cl называет его по первому исходному файлу, а a.exe от gcc переименовывается.
:RUN_INT_TEST
set R05PATH=%RUNTIME_DIR%
set R05CFLAGS=
"%COMPILER%" "%TESTS_DIR:\=/%/%TEST%" refal05bif refal05rts >__cc.txt 2>&1
if exist a.exe move /Y a.exe "%BASENAME%.exe" >nul
if not exist "%BASENAME%.exe" (
    echo   FAILED: compiler produced no executable
    type __cc.txt
    goto :FAIL
)

:RUN_EXE
"%BASENAME%.exe" >nul 2>__dump.txt
if errorlevel 1 (
    echo   FAILED: test run failed
    type __dump.txt
    goto :FAIL
)

:PASS
call :CLEANUP
echo   OK
set /a PASSED+=1
exit /b 0

:FAIL
call :CLEANUP
set /a FAILED+=1
exit /b 0

:CLEANUP
if exist *.c del /q *.c
if exist *.exe del /q *.exe
if exist *.obj del /q *.obj
if exist __error.txt del /q __error.txt
if exist __cc.txt del /q __cc.txt
if exist __dump.txt del /q __dump.txt
exit /b 0
