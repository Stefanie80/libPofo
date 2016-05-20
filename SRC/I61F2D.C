/* INT61, Fn 2Dh Turn System Off */
pofo_turnOff()
{
  extern unsigned _rax;
  _rax = 0x2D << 8;
  _doint(0x61);
}

