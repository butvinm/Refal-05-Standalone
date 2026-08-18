@echo off
setlocal enabledelayedexpansion

set MODULES=src\main src\generator src\parser
set FRAMEWORK=framework\lib\LibraryEx framework\lib\R5FW-Parser framework\lib\R5FW-Plainer framework\lib\R5FW-Transformer framework\lib\posix\Platform
set LIBS=lib\refal05bif lib\refal05rts

set MODULES_CFILES=bootstrap\main.c bootstrap\generator.c bootstrap\parser.c
set FRAMEWORK_CFILES=bootstrap\LibraryEx.c bootstrap\R5FW-Parser.c bootstrap\R5FW-Plainer.c bootstrap\R5FW-Transformer.c bootstrap\Platform.c
set LIBS_CFILES=lib\refal05bif.c lib\refal05rts.c
set LIBS_INCLUDE=-Ilib

if not exist framework\lib\R5FW-Parser.ref (
    git submodule update --init framework
    if errorlevel 1 (
        echo The framework submodule is missing and could not be fetched. Run: git submodule update --init
        exit /b 1
    )
)

call c-plus-plus.conf.cmd
if errorlevel 1 exit /b 1

echo Configured compiler: R05CCOMP=%R05CCOMP%

echo 1. Build bin\refal05c-old.exe from bootstrap/
if not exist bin mkdir bin
%R05CCOMP% %LIBS_INCLUDE% -DR05_SHOW_STAT -o bin\refal05c-old.exe %MODULES_CFILES% %FRAMEWORK_CFILES% %LIBS_CFILES%
if errorlevel 1 exit /b 1

echo 2. Generate new bootstrap/ with bin\refal05c-old.exe
del %MODULES_CFILES% %FRAMEWORK_CFILES%
set R05CCOMP_SAVE=%R05CCOMP%
set R05CCOMP=
set R05PATH=
bin\refal05c-old.exe %MODULES% %FRAMEWORK% %LIBS%
if errorlevel 1 exit /b 1
set R05CCOMP=%R05CCOMP_SAVE%
move /Y src\*.c bootstrap\
if errorlevel 1 exit /b 1
move /Y framework\lib\*.c bootstrap\
if errorlevel 1 exit /b 1
move /Y framework\lib\posix\*.c bootstrap\
if errorlevel 1 exit /b 1

echo 3. Build bin\refal05c.exe from new bootstrap/
%R05CCOMP% %LIBS_INCLUDE% -DR05_SHOW_STAT -o bin\refal05c.exe %MODULES_CFILES% %FRAMEWORK_CFILES% %LIBS_CFILES%
if errorlevel 1 exit /b 1

echo 4. Run autotests for bin\refal05c.exe
call autotests\run.cmd
if errorlevel 1 exit /b 1

echo Compiler bootstrapped successfully
