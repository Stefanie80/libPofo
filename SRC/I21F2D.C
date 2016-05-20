/* INT21, Fn 2Dh DOS Set System Time */
pofo_SetRealTime(h, m, s)
    char h;
    char m;
    char s;
{
  extern unsigned _rax, _rcx, _rdx;
  _rax = 0x2D00;
  _rcx = h<<8;
  _rcx += m;
  _rdx = s<<8;
  _doint(0x21);
}
