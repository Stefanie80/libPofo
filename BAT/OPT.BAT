@echo off
c88 %1 A
echo.
o88 <%1.a >%1.opt
del %1.a
ren %1.opt %1.a
asm88 %1
echo.
del %1.a
