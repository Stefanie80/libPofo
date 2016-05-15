/* INT61, Fn12h ScreenRefresh */
int61_screenRefresh()
{
  extern unsigned _rax;
  _rax = 0x12 << 8;
  _doint(0x61);
}

