/* INT61, Fn 16h Tone Generator */
pofo_makeTone(tone, dur)
	char tone;
	int dur;
{
  extern unsigned _rax, _rcx, _rdx;
  _rax = 0x16 << 8;
  _rcx = dur;
  _rdx = tone;
  _doint(0x61);
}

