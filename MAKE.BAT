@echo off
echo Make libPofo & Test Program
echo.
echo make lib   : Build the Portfolio support library
echo make olib  : Build the library using the O88 optimizer
echo make test  : Build the test program
echo make all   : Build both libs and the test program
echo make clean : Remove files from previous build
echo make send  : Send compiled files to Portfolio
echo make tsend : Send only TEST.EXE to Portfolio
echo make clone : Clone library source to Portfolio
echo.
goto %1

:clone
ft bat\*.* bat\*.*/t
ft src\*.* src\*.*/t
ft *.*/t
goto stop

:all
cd bat
call mklib.bat
cd bat
call make_opt.bat
cd bat
call mktest.bat
goto stop

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

:tsend
echo Put your Portfolio in Server Mode
echo Sending TEST.EXE ...
if exist test.exe ft test.exe/t
goto stop

:stop


