/* INT61, Fn 24h Get ROM Space State */
char pofo_getRomState() {
  extern unsigned _rax, _rbx, _rdx;
  _rax=0;
  _rax=0x24<<8;
  _doint(0x61);
  return _rdx;
}

/* INT61, Fn 24h Set ROM Space State */
char pofo_setRomState(state)
  char state;
{
  extern unsigned _rax, _rbx, _rdx;
  if((state<0) || (state>3)) {
    return -1;
    }
  _rax=0;
  _rax=0x24<<8;
  _rax++;
  _rdx=state;
  _doint(0x61);
  return _rdx;  
}

/* INT61, Fn 24h Get CCM State */
char pofo_getCcmState() {
  extern unsigned _rax, _rbx, _rdx;
  _rax=0;
  _rax=0x24<<8;
  _doint(0x61);
  return _rdx>>8;
}

/* INT61, Fn 24h Set CCM State */
char pofo_setCcmState(state)
  char state;
{
  extern unsigned _rax, _rbx, _rdx;
  if((state<0) || (state>2)) {
    return -1;
    }
  _rax=0;
  _rax=0x24<<8;
  _rax++;
  _rdx=state;
  _rdx << 8;
  _rdx++;
  _doint(0x61);
  return _rdx>>8;  
}
