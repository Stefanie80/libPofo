This Library has been compiled with Desmet C 2.51 

It can be used to compile Programs on and for the ATARI Portfolio.
Building the Library fails on the Portfolio, but binding it into 
Programs works.
It supports many of the INT61h Extended BIOS functions of the 
Portfolio, as well as some DOS Calls and a BIOS Call to get the 
Memory size.
Maybe it is usefull for someone ...

The integrated make.bat assumes that you have Desmet C 2.51 in your path. 
Desmet C can be found here : http://desmet-c.com/
If your Setup is correct, then you can just type "make lib" to build
the library. If you also have the O88 optimizer installed and in your 
path, you can use "make olib" to run the optimizer over each file, making 
the lib about 5% smaller. Then you can run "make test" to build a 
"Test.exe" that uses some of the routines in the Library.

Update:
I found out that either the gets() or the fputs() routine in the stdio.s of
Desmet 2.51 crash the Portfolio. It works well with Desmet 3.1 however. Too sad
that i don't have the sources for the 2.51 librarys. I will try to find a 
workaround for this. I really want the 2.51 version to work, because the 3.1
needs too much RAM to compile usefull programs on the 128k-Portfolio. It should 
work with more RAM though.

Credits:
Klaus Peichl for his Assembler PutPixel-Routine

Happy Hacking!
