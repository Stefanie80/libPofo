int int21_findNextFile(atr)
    char atr;
{
  extern unsigned _rax, _rcx;
  extern char _carryf;

  _rax = 0x4F << 8;
  _rcx = atr;
  _doint(0x21);
  if(_carryf > 0) {
    return _rax;
  } else {
    return 0;
  }
}
