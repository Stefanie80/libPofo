@echo off
echo Making libpofo.s ...
cd ..\src
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
