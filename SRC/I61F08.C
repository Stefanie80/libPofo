/* INT61, Fn 08h Get RAM Disk size */
int int61_getDiskSize()
{
  extern unsigned _rax, _rbx, _rds;
  _rax= 0x08 << 8;
  _rbx= 0;
  _rds= -1;
  _doint(0x61);
  return _rbx;  
}

