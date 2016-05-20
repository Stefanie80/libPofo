@echo off
copy ..\libpofo.s
if not exist libpofo.s goto nolib

echo Building Test Programm ...
c88 test
echo.
bind test libpofo.s -otest
echo.
copy *.exe ..
del *.exe
del *.o
del *.s
goto stop

:nolib
echo You must build the Library first!

:stop

