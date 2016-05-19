long int1A_getTicks() {
  extern unsigned _rax, _rcx, _rdx;
  long tmp;
  _rax=0x0000;
  _doint(0x1A);
  tmp = _rcx<<16;
  tmp += _rdx;
  return tmp;
}


