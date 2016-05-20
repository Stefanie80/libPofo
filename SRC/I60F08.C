/* INT60, Fn 08h Save Screen */ 
pofo_saveScreenArea(sy,sx,ey,ex,buf)
  char sy;        /*start row*/
  char sx;        /*start col*/
  char ey;        /*end row*/
  char ex;        /*end col*/
  unsigned* buf;  /*pointer to buffer*/
{
  extern unsigned _rax, _rbx, _rcx, _rdx, _rds, _rsi;
  _rax  =0x0800;
  _rds  =_showds();
  _rsi  =buf;
  _rdx  =sy<<8; /*upper left*/
  _rdx  +=sx;
  _rcx  =ey<<8;   /*bottom right*/
  _rcx  +=ex;
  _doint(0x60);
}

/* INT60, Fn 08h Restore Screen */
pofo_restoreScreenArea(sy,sx,ey,ex,buf)
  char sy;        /*start row*/
  char sx;        /*start col*/
  char ey;        /*end row*/
  char ex;        /*end col*/
  unsigned* buf;  /*pointer to buffer*/
{
  extern unsigned _rax, _rbx, _rcx, _rdx, _rds, _rsi;
  _rax  =0x0802;
  _rds  =_showds();
  _rsi  =buf;
  _rdx  =sy<<8; /*upper left*/
  _rdx  +=sx;
  _rcx  =ey<<8;   /*bottom right*/
  _rcx  +=ex;
  _doint(0x60);
}
