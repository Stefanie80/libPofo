/* INT61, Fn 09h Format RAM Disk */
char int61_formatRAM(size)
	unsigned size;
{
  extern unsigned _rax, _rbx;
  extern char _carryf;
  _rax = 0x09 << 8;
  _rbx = size;
  _doint(0x61);
  if(_carryf == 1) {
    return _rbx;
  } else {
    return 0;
  }
  /* NOT TESTED */
}

