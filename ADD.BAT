@echo off
if "%1" == "" goto usage
if not exist %1.c goto cfnf
if not exist %1.h goto hfnf
if not exist bin\cat.com goto bfnf
if not exist bin\cleanup.exe goto bfnf

echo Integrating %1.c ...
echo %1 >tmp.lst
bin\cat tmp.lst src\libpofo.lst >tmp.ls1
bin\cleanup tmp.ls1 new.lst
echo set file=%1 >tmp.bat
bin\cat tmp.bat bat\template.lib >tmp.ba1
bin\cat tmp.bat bat\template.opt >tmp.ba2
bin\cat tmp.ba1 bat\mklib.bat >tmp.ba3
bin\cleanup tmp.ba3 newlib.bat
bin\cat tmp.ba2 bat\make_opt.bat >tmp.ba4
bin\cleanup tmp.ba4 newopt.bat
bin\cat src\libpofo.h %1.h >tmp.h
bin\cleanup tmp.h newlib.h
del tmp.*
copy %1.* bak>NULL
move newlib.h src\libpofo.h>NULL
move newopt.bat bat\make_opt.bat>NULL
move newlib.bat bat\mklib.bat>NULL
move new.lst src\libpofo.lst>NULL
move %1.c src>NULL
del %1.h
goto end

:usage
echo ADD.BAT:
echo    Integrate new function to library
echo    Update .LST, .H and .BAT files in one step
echo.
echo Usage:
echo    "add <filename>"
echo    Filename must be without extension
echo    You must supply .c and .h files
goto end

:cfnf
echo %1.c not found!
goto end

:hfnf
echo %1.h not found!
goto end

:bfnf
echo Helper Program not found!
echo "cat.com" and "cleanup.exe"
echo required!
goto end

:end

