/* INT61, Fn 19h Get Serial Parameter */
char int61_getSerialParam(port)
	char port;
{
  extern unsigned _rax, _rdx;
  char tmp;
  _rax=0x19<<8;
  _rdx=port;
  _doint(0x61);
  tmp=_rax>>8;
  if(tmp ==0) {
    return _rax;
  } else {
    return 0;
  }
}

