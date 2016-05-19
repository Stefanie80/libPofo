int1A_setTicks(ticks)
    unsigned ticks;
{
  extern unsigned _rax, _rcx, _rdx;
  _rax=0x0100;
  _rcx=ticks;
  _rdx=ticks;
  _doint(0x1a);
}
