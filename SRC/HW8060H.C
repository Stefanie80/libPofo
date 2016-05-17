char pofo_getContrast()
{
  return _inb(0x8060);
}

pofo_setContrast(cont)
    char cont;
{
  _outb(cont, 0x8060);
}
