@echo off
echo Making optimized libopofo.s
cd ..\src
call ..\bat\opt i60f00
echo.
if errorlevel 1 goto stop
call ..\bat\opt i10f03
echo.
if errorlevel 1 goto stop
call ..\bat\opt i1af01
echo.
if errorlevel 1 goto stop
call ..\bat\opt i10f02
echo.
if errorlevel 1 goto stop
call ..\bat\opt i1af04
echo.
if errorlevel 1 goto stop
call ..\bat\opt i1af00
echo.
if errorlevel 1 goto stop
call ..\bat\opt i1af02
echo.
if errorlevel 1 goto stop
call ..\bat\opt i11f00
echo.
if errorlevel 1 goto stop
call ..\bat\opt i16f00
echo.
if errorlevel 1 goto stop
call ..\bat\opt i61f24
echo.
if errorlevel 1 goto stop
c88 hwpixel px A
echo.
o88 <hwpixel.a >hwpixel.opt
del hwpixel.a
ren hwpixel.opt hwpixel.a
asm88 hwpixel
echo.
del hwpixel.a
if errorlevel 1 goto stop
call ..\bat\opt int10gfx
echo.
if errorlevel 1 goto stop
call ..\bat\opt hw8060h
echo.
if errorlevel 1 goto stop
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
