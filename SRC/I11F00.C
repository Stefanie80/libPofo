unsigned pofo_getEquipmentList() {
  extern unsigned _rax;
  _rax=0;
  _doint(0x11);
  return _rax;
}

char pofo_getFloppies() {
  extern unsigned _rax;
  char tmp;
  _rax=0;
  _doint(0x11);
  if(_rax & 0x01) {
    /* Floppy present, check number */
    tmp=((_rax & 0x60) >> 5);
    tmp++;
    return tmp;
  } else {
    return 0;
  }
}

char pofo_getComports() {
  extern unsigned _rax;
  char tmp;
  _rax=0;
  _doint(0x11);
  tmp=(_rax & 0xE00) >> 9;
  return tmp;
}

char pofo_getParports() {
  extern unsigned _rax;
  char tmp;
  _rax=0;
  _doint(0x11);
  tmp=(_rax & 0xC000) >> 14;
  return tmp;
}
