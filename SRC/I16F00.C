char pofo_getKeystroke() {
  extern unsigned _rax;
  _rax=0;
  _doint(0x16);
  return _rax;
}

char pofo_getScancode() {
  extern unsigned _rax;
  _rax=0;
  _doint(0x16);
  return _rax>>8;
}
