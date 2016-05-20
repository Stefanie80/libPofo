pofo_putPixel(x, y, p)
  char x;
  char y;
  char p;
{
  extern unsigned _rax, _rcx, _rdx;
  _rax =0x0C<<8;
  _rax += p;
  _rcx = x;
  _rdx = y;
  _doint(0x10);
}

pofo_setGfxMode(mode)
    char mode;
{
  extern unsigned _rax;
  _rax=0;
  _rax+=mode;
  _doint(0x10);
}

char pofo_getGfxMode()
{
  extern unsigned _rax;
  _rax=0x0F<<8;
  _doint(0x10);
  return _rax;
}

char pofo_getPixel(x, y)
  char x;
  char y;
{
  extern unsigned _rax, _rcx, _rdx;
  _rax=0x0D00;
  _rcx=x;
  _rdx=y;
  _doint(0x10);
  return _rax;
}

