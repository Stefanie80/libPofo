/* INT12, Fn 00h Get Total Memory from BIOS */
int int12_getMemorySize()
{
  extern unsigned _rax;
  _doint(0x12);
  return _rax;
}
