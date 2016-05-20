pofo_getVersion(dest)
    char *dest;
{
  extern unsigned _rax, _rdx, _rds;
  char buff[8];
  _doint(0x60);
  _lmove(8, _rdx, _rds, &buff, _showds());
  strcpy(dest, &buff);
}
