pofo_getSystemDate(dest)
    char *dest[];
{
  extern unsigned _rax, _rcx, _rdx;
  extern char _carryf;
  char c,y,m,d;
  _rax = 0x0400;
  _carryf=0;
  _doint(0x1A);

  c = _rcx>>8;
  y = _rcx;
  m = _rdx>>8;
  d = _rdx;

  dest[0] = bcd2dec(c);
  dest[1] = bcd2dec(y);
  dest[2] = bcd2dec(m);
  dest[3] = bcd2dec(d);
}
