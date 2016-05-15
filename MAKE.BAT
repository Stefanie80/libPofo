@echo off
echo Make libPofo & Test Program
echo.
echo make lib   : Build the Portfolio support Library
echo make olib  : Build the Library using the O88 Optimizer
echo make test  : Build the test Program
echo make clean : Remove files from previous build
echo make send  : Send compiled files to Portfolio
echo.
goto %1

:lib
cd bat
call mklib.bat
goto stop

:olib
cd bat
call make_opt.bat
goto stop

:test
cd bat
call mktest.bat
goto stop

:clean
echo Removing build files ...
del .\src\*.o>NUL
del .\src\*.s>NUL
del .\src\*.exe>NUL
del *.s>NUL
del *.exe>NUL
del *.h>NUL
goto stop

:send
echo Put your Portfolio in Server Mode
echo Sending files ...
if exist libpofo.s ft libpofo.s/t
if exist libopofo.s ft libopofo.s/t
if exist libpofo.h ft libpofo.h/t
if exist test.exe ft test.exe/t
goto stop

:stop


