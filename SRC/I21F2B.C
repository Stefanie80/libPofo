/*INT21, Fn 2Bh DOS Set System Date */
pofo_setSystemDate(y, m, d)
  int y;
  char m;
  char d;
{
  extern unsigned _rax, _rcx, _rdx;
  _rax = 0x2B00;
  _rcx = y;
  _rdx = m<<8;
  _rdx += d;
  _doint(0x21);
}
