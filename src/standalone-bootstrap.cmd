@echo off
setlocal enabledelayedexpansion

set COMPILER=refal-05/src/main refal-05/src/generator refal-05/src/parser
set FRAMEWORK=refal-5-framework/lib/LibraryEx refal-5-framework/lib/R5FW-Parser refal-5-framework/lib/R5FW-Plainer refal-5-framework/lib/R5FW-Transformer refal-5-framework/lib/posix/Platform
set LIBS=refal-05/lib/refal05bif refal-05/lib/refal05rts

set COMPILER_CFILES=bootstrap\main.c bootstrap\generator.c bootstrap\parser.c
set FRAMEWORK_CFILES=bootstrap\LibraryEx.c bootstrap\R5FW-Parser.c bootstrap\R5FW-Plainer.c bootstrap\R5FW-Transformer.c bootstrap\Platform.c
set LIBS_CFILES=refal-05\lib\refal05bif.c refal-05\lib\refal05rts.c
set LIBS_INCLUDE=-Irefal-05\lib

for %%S in (refal-05 refal-5-framework) do (
    if not exist %%S\README.md (
        git submodule update --init %%S
        if errorlevel 1 (
            echo Submodule %%S is missing and could not be fetched. Run: git submodule update --init
            exit /b 1
        )
    )
)

call c-plus-plus.conf.cmd
if errorlevel 1 exit /b 1

echo Configured compiler: R05CCOMP=%R05CCOMP%

echo 1. Build bin\refal05c-old.exe from bootstrap/
if not exist bin mkdir bin
%R05CCOMP% %LIBS_INCLUDE% -DR05_SHOW_STAT -o bin\refal05c-old.exe %COMPILER_CFILES% %FRAMEWORK_CFILES% %LIBS_CFILES%
if errorlevel 1 exit /b 1

echo 2. Generate new bootstrap/ with bin\refal05c-old.exe
del %COMPILER_CFILES% %FRAMEWORK_CFILES%
set R05CCOMP_SAVE=%R05CCOMP%
set R05CCOMP=
set R05PATH=
bin\refal05c-old.exe %COMPILER% %FRAMEWORK% %LIBS%
if errorlevel 1 exit /b 1
set R05CCOMP=%R05CCOMP_SAVE%
move /Y *.c bootstrap\
if errorlevel 1 exit /b 1

echo 3. Build bin\refal05c.exe from new bootstrap/
%R05CCOMP% %LIBS_INCLUDE% -DR05_SHOW_STAT -o bin\refal05c.exe %COMPILER_CFILES% %FRAMEWORK_CFILES% %LIBS_CFILES%
if errorlevel 1 exit /b 1

echo 4. Run autotests for bin\refal05c.exe
call autotests\run.cmd
if errorlevel 1 exit /b 1

echo Compiler bootstrapped successfully
