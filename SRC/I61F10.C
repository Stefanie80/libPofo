/* INT61, Fn10h Get Virual Screen Pos */
int pofo_getVirtualScreen()
{
  extern unsigned _rax, _rdx;
  _rax = 0x10 << 8;
  _doint(0x61);
  return _rdx;
}

/* INT61, Fn10h Set Virual Screen Pos */
int pofo_setVirtualScreen(row, col)
	char row;
	char col;
{
  extern unsigned _rax, _rdx;
  _rax = 0x10 << 8;
  _rax++;
  _rdx = (row << 8) + col;
  _doint(0x61);
  return _rdx;
}

