/* INT61, Fn 0Bh Detect CCM Cards */
char int61_checkCard(drive)
	char drive;
{
  extern unsigned _rax;
  extern char _carryf;
  _rax = (0x0B << 8) + drive;
  _doint(0x61);
  if(_carryf == 0) {
    return 0;
  } else {
    return (_rax >> 8);
  }
}

