@echo off
setlocal enabledelayedexpansion

rem Статистика раскрутки: -n шаги, -t время, -s пиковая память, -l20 предел поля зрения в мегабайтах.
rem Те же опции передаёт refal-05/src/makeself.cmd. До bd7cc28 статистику включал -DR05_SHOW_STAT,
rem но этого макроса в runtime больше нет: отладочные средства управляются командной строкой.
set OPTIONS=-nts -l20

set COMPILER=refal-05/src/main refal-05/src/generator refal-05/src/parser
set FRAMEWORK=refal-5-framework/lib/LibraryEx refal-5-framework/lib/R5FW-Parser refal-5-framework/lib/R5FW-Plainer refal-5-framework/lib/R5FW-Transformer refal-5-framework/lib/posix/Platform

rem Каталог bootstrap/ самодостаточен: восемь порождённых C-файлов плюс refal05rts.h, refal05rts.c и refal05bif.c той ревизии runtime, для которой они порождены.
rem Старый компилятор собирается из него одного, и новый заголовок из подмодуля его не касается.
set RUNTIME=refal05rts.h refal05rts.c refal05bif.c
set STAGE2=bin\stage2

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

echo 1. Build bin\refal05c-old.exe from bootstrap/ alone
if not exist bin mkdir bin
%R05CCOMP% -Ibootstrap -o bin\refal05c-old.exe bootstrap\*.c
if errorlevel 1 exit /b 1

echo 2. Compile the new sources with bin\refal05c-old.exe
rem Старый генератор порождает C под старый runtime, поэтому этот текст в bootstrap/ не попадает.
if exist %STAGE2% rmdir /S /Q %STAGE2%
mkdir %STAGE2%
set R05CCOMP_SAVE=%R05CCOMP%
set R05CCOMP=
set R05PATH=
bin\refal05c-old.exe %OPTIONS% %COMPILER% %FRAMEWORK%
if errorlevel 1 exit /b 1
set R05CCOMP=%R05CCOMP_SAVE%
move /Y *.c %STAGE2%\
if errorlevel 1 exit /b 1

echo 3. Build bin\refal05c-mid.exe against the old runtime from bootstrap/
rem Промежуточный компилятор уже несёт новый генератор, но собран из C старого генератора, поэтому линкуется с тем runtime, для которого этот C порождён.
%R05CCOMP% -Ibootstrap -o bin\refal05c-mid.exe %STAGE2%\*.c bootstrap\refal05bif.c bootstrap\refal05rts.c
if errorlevel 1 exit /b 1

echo 4. Generate new bootstrap/ with bin\refal05c-mid.exe
rem Теперь C порождён новым генератором, и рядом кладётся runtime той же ревизии.
set R05CCOMP=
bin\refal05c-mid.exe %OPTIONS% %COMPILER% %FRAMEWORK%
if errorlevel 1 exit /b 1
set R05CCOMP=%R05CCOMP_SAVE%
del /Q bootstrap\*.c bootstrap\*.h
move /Y *.c bootstrap\
if errorlevel 1 exit /b 1
for %%F in (%RUNTIME%) do (
    copy /Y refal-05\lib\%%F bootstrap\ >nul
    if errorlevel 1 exit /b 1
)

echo 5. Build bin\refal05c.exe from new bootstrap/
%R05CCOMP% -Ibootstrap -o bin\refal05c.exe bootstrap\*.c
if errorlevel 1 exit /b 1

echo 6. Run autotests for bin\refal05c.exe
call scripts\autotests.cmd
if errorlevel 1 exit /b 1

echo Compiler bootstrapped successfully
