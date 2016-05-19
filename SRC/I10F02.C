int10_setCursorPos(x, y)
  char x;
  char y;
{
  extern unsigned _rax, _rbx, _rcx, _rdx;
  _rax=0x0200;
  _rbx=0;
  _rdx=y<<8;
  _rdx += x;
  _doint(0x10);
}
