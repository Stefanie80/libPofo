/* INT61, Fn0Eh Get Screen Mode */
char int61_getScreenMode()
{
  extern unsigned _rax, _rdx;
  _rax = 0x0E << 8;
  _doint(0x61);
  return _rdx;
}

/* INT61, Fn0Eh Set Screen Mode */
char int61_setScreenMode(mode)
	char mode;
{
  extern unsigned _rax, _rdx;
  _rax = (0x0E << 8) +1;
  _rdx = mode;
  _doint(0x61);
  return _rdx;
}

