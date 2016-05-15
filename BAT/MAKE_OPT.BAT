@echo off
echo Making optimized libopofo.s
cd ..\src
call ..\bat\opt helpers
echo.
if errorlevel 1 goto stop
call ..\bat\opt I21F4F
echo.
if errorlevel 1 goto stop
call ..\bat\opt I21F4E
echo.
if errorlevel 1 goto stop
call ..\bat\opt I21F1A
echo.
if errorlevel 1 goto stop
call ..\bat\opt I12F00
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F08
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F09
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F0B
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F0D
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F0E
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F0F
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F10
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F11
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F12
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F15
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F16
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F19
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F1A
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F1E
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F2D
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F2E
echo.
if errorlevel 1 goto stop
call ..\bat\opt I61F00
echo.
if errorlevel 1 goto stop

lib88 -Flibpofo.lst -Olibopofo
echo.
copy libopofo.s ..
copy libpofo.h ..
del *.o
del *.s
cd ..

:stop
