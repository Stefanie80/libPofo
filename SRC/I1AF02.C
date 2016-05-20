pofo_getRealTime(dest)
  char *dest[3];
{
  extern unsigned _rax, _rcx, _rdx;
  extern char _carryf;
  char h,m,s;

  _rax=0x0200;
  _carryf=0;
  _doint(0x1A);

  m = _rcx & 0x00FF;  
  h = _rcx>>8;
  s = _rdx>>8;

  dest[0] = bcd2dec(h);
  dest[1] = bcd2dec(m);
  dest[2] = bcd2dec(s);
}
