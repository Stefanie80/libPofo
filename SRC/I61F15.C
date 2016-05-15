/* INT61, Fn 15h Sound Settings */
int61_setSound(func)
	char func;
{
  extern unsigned _rax;
  if( (func<0) || (func>2) ) {
    return;
  } else {
    _rax = (0x15 << 8) + func;
    _doint(0x61);
  }
}

