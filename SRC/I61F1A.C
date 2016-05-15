/* INT61, Fn 1Ah Get Peripheral ID */
char int61_getPeripheralID()
{
  extern unsigned _rax;
  char tmp;
  _rax = 0x1A << 8;
  _doint(0x61);
  tmp = _rax;
  if(tmp==0) {
    return -1;
  } else {
    return (_rax >> 8);
  }
}

