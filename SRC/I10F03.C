unsigned pofo_getCursorPos()
{
  extern unsigned _rax, _rbx, _rcx, _rdx;
  _rax=0x0300;
  _rbx=0;
  _doint(0x10);
  return _rdx;
}

unsigned pofo_getCursorShape()
{
  extern unsigned _rax, _rbx, _rcx, _rdx;
  _rax=0x0300;
  _rbx=0;
  _doint(0x10);
  return _rcx;
}
