/* INT61, Fn11h Move Virtual Screen */
int61_moveVirtualScreen(dir, dist)
	char dir;
	char dist;
{
  extern unsigned _rax, _rdx;
  _rax = (0x11 << 8) + dist;
  if( (dir>0)&&(dir<5) ) {
    _rdx = dir;
  } else {
    _rdx = 0;
  }
  _doint(0x61);
}

