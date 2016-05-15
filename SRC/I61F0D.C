/* INT61, Fn0Dh Get Screen Size */
int int61_getScreenSize(sw)
	char sw;
{
  extern unsigned _rax, _rdx;
  _rax = 0x0D << 8;
  _doint(0x61);
  if(sw == 0) {
    return _rax;
  } else {
    return _rdx;
  }
}

