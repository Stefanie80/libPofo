pofo_dosSetDTA(ptr)
    int ptr;
{
  extern unsigned _rax, _rdx, _rds;
  _rds = _showds();
  _rdx = ptr;
  _rax = 0x1A << 8;
  _doint(0x21);
}
