char int16_getKeystroke() {
  extern unsigned _rax;
  _rax=0;
  _doint(0x16);
  return _rax;
}

char int16_getScancode() {
  extern unsigned _rax;
  _rax=0;
  _doint(0x16);
  return _rax>>8;
}
