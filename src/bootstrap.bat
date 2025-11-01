@echo off
setlocal enabledelayedexpansion

set MODULES=src\refal05c src\R05-CompilerUtils src\R05-Generator src\R05-Parser
set LIBS=lib\Library lib\refal05rts

set MODULES_CFILES=bootstrap\refal05c.c bootstrap\R05-Generator.c bootstrap\R05-CompilerUtils.c bootstrap\R05-Parser.c
set R5FW_CFILES=bootstrap\R5FW-Parser-Defs.c bootstrap\R5FW-Plainer.c bootstrap\Platform.c bootstrap\LibraryEx.c bootstrap\R5FW-Parser.c bootstrap\R5FW-Transformer.c
set LIBS_CFILES=lib\Library.c lib\refal05rts.c
set LIBS_INCLUDE=-Ilib

call c-plus-plus.conf.bat
if errorlevel 1 exit /b 1

echo Configured compiler: R05CCOMP=%R05CCOMP%

echo 1. Build bin\refal05-old.exe from bootstrap/
if not exist bin mkdir bin
%R05CCOMP% %LIBS_INCLUDE% -DR05_SHOW_STAT -o bin\refal05-old.exe %MODULES_CFILES% %R5FW_CFILES% %LIBS_CFILES%
if errorlevel 1 exit /b 1

echo 2. Generate new bootstrap/ with bin\refal05-old.exe
del %MODULES_CFILES%
set R05CCOMP_SAVE=%R05CCOMP%
set R05CCOMP=
set R05PATH=
bin\refal05-old.exe %MODULES% %LIBS%
if errorlevel 1 exit /b 1
set R05CCOMP=%R05CCOMP_SAVE%
move *.c bootstrap
if errorlevel 1 exit /b 1

echo 3. Build bin\refal05.exe from new bootstrap/
%R05CCOMP% %LIBS_INCLUDE% -DR05_SHOW_STAT -o bin\refal05.exe %MODULES_CFILES% %R5FW_CFILES% %LIBS_CFILES%
if errorlevel 1 exit /b 1

echo 4. Run autotests for bin\refal05.exe
call autotests\run.bat
if errorlevel 1 exit /b 1

echo Compiler bootstrapped successfully
