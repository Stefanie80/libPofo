/* INT21, Fn30h DOS Get DOS Version */
unsigned pofo_getDosVersion() {
  extern unsigned _rax;
  _rax=0x3000;
  _doint(0x21);
  return _rax;
}
