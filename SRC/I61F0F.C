/* INT61, Fn0Fh Get Cursor Mode */
char pofo_getCursorMode()
{
  extern unsigned _rax, _rbx;
  _rax = (0x0F << 8);
  _doint(0x61);
  return _rbx;
}

/* INT61, Fn0Fh Set Cursor Mode */
char pofo_setCursorMode(mode)
	char mode;
{
  extern unsigned _rax, _rbx;
  _rax = (0x0F << 8) + 1;
  _rbx = 0;
  if(mode > 2) {
    _rax++;
  } else {
    _rbx=mode;
  }
  _doint(0x61);
  return _rbx;
}

