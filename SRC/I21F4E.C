int pofo_dosFindFirstFile(ptr, atr)
    int ptr;
    char atr;
{
  extern unsigned _rax, _rcx, _rdx, _rds;
  extern char _carryf;

  _rax = 0x4E << 8;
  _rds = _showds();
  _rdx = ptr;
  _rcx = atr;
  _doint(0x21);
  if(_carryf > 0) {
    return _rax;
  } else {
    return 0;
  }
}

