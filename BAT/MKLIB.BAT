@echo off
echo Making libpofo.s ...
cd ..\src
c88 i60f00
echo.
if errorlevel 1 goto stop
c88 i10f03
echo.
if errorlevel 1 goto stop
c88 i1af01
echo.
if errorlevel 1 goto stop
c88 i10f02
echo.
if errorlevel 1 goto stop
c88 i1af04
echo.
if errorlevel 1 goto stop
c88 i1af02
echo.
if errorlevel 1 goto stop
c88 i1af00
echo.
if errorlevel 1 goto stop
c88 i11f00
echo.
if errorlevel 1 goto stop
c88 i16f00
echo.
if errorlevel 1 goto stop
c88 i61f24
echo.
if errorlevel 1 goto stop
c88 hwpixel px
echo.
if errorlevel 1 goto stop
c88 int10gfx
echo.
if errorlevel 1 goto stop
c88 hw8060h
echo.
if errorlevel 1 goto stop
c88 helpers
echo.
if errorlevel 1 goto stop
c88 I21F4F
echo.
if errorlevel 1 goto stop
c88 I21F4E
echo.
if errorlevel 1 goto stop
c88 I21F1A
echo.
if errorlevel 1 goto stop
c88 I12F00
echo.
if errorlevel 1 goto stop
c88 I61F08
echo.
if errorlevel 1 goto stop
c88 I61F09
echo.
if errorlevel 1 goto stop
c88 I61F0B
echo.
if errorlevel 1 goto stop
c88 I61F0D
echo.
if errorlevel 1 goto stop
c88 I61F0E
echo.
if errorlevel 1 goto stop
c88 I61F0F
echo.
if errorlevel 1 goto stop
c88 I61F10
echo.
if errorlevel 1 goto stop
c88 I61F11
echo.
if errorlevel 1 goto stop
c88 I61F12
echo.
if errorlevel 1 goto stop
c88 I61F15
echo.
if errorlevel 1 goto stop
c88 I61F16
echo.
if errorlevel 1 goto stop
c88 I61F19
echo.
if errorlevel 1 goto stop
c88 I61F1A
echo.
if errorlevel 1 goto stop
c88 I61F1E
echo.
if errorlevel 1 goto stop
c88 I61F2D
echo.
if errorlevel 1 goto stop
c88 I61F2E
echo.
if errorlevel 1 goto stop
c88 I61F00
echo.
if errorlevel 1 goto stop

lib88 -Flibpofo.lst -Olibpofo
echo.
copy libpofo.s ..
copy libpofo.h ..

del *.s
del *.o
:stop
cd ..
