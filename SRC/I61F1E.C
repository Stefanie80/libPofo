/* INT61, Fn 1Eh Get Tick Speed */
char int61_getTickSpeed()
{
  extern unsigned _rax, _rbx;
  _rax = 0x1E << 8;
  _doint(0x61);
  return _rbx;
}

/* INT61, Fn 1Eh Set Tick Speed */
int61_setTickSpeed(speed)
	char speed;
{
  extern unsigned _rax, _rbx;
  _rax=(0x1E<<8)+1;
  if(speed>0) {
    _rbx=1;
  } else {
    _rbx=0;
  }
  _doint(0x61);
}

