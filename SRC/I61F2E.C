/* INT61, Fn 2Eh Disable Status Line */
pofo_disableStatus()
{
  extern unsigned _rax;
  _rax = 0x2E << 8;
  _doint(0x61);
}

/* INT61, Fn 2Eh Enable Status Line */
pofo_enableStatus(row, col)
	char row;
	char col;
{
  extern unsigned _rax, _rdx;
  _rax = (0x2E<<8)+1;
  _rdx = (row<<8) + col;
  _doint(0x61);
}

