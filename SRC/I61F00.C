/* C library for Portfolio */

/* INT61, Fn 00h Init */
void pofo_int61Init()
{
  extern unsigned _rax;
  _rax = 0;
  _doint(0x61);
}

/* INT61, Fn 07h Format CCM */
char pofo_formatCCM(drive)
	char drive;
{
  /* not yet implemented */
  /* because i have no CCM */
}

/* INT61, Fn 17h Dial Number */
pofo_dialNumber(number)
	char *number[];
{
  /* This one will need includes */
}

/* INT61, Fn 18h Get Mute States */
/* INT61, Fn 18h Set Mute States */
/* INT61, Fn 18h Get DTMF duration */
/* INT61, Fn 18h Set DTMF duration */

/* INT61, Fn 1Bh Set Peripheral ID */
pofo_setPeripheralID(byte)
	char byte;
{
  /* not implemented */
  extern unsigned _rax, _rdx;
}

/* INT61, Fn 1Ch Get Peripheral Data */
/* INT61, Fn 1Ch Set Peripheral Data */

/* INT61, Fn 1Fh Get Screen Refresh */
/* INT61, Fn 1Fh Set Screen Refresh */

/* INT61, Fn 20h Get 09h revector */
/* INT61, Fn 20h Enable 09h revector */

/* INT61, Fn 24h Get ROM Space State */
/* INT61, Fn 24h Set ROM Space State */
/* INT61, Fn 24h Get CCM Space State */
/* INT61, Fn 24h Set CCM Space State */

/* INT61, Fn 26h Get Power Control */
/* INT61, Fn 26h Set Power Control */

/* INT61, Fn 28h Get Text Language */
/* INT61, Fn 28h Get Keyboard Language */
/* INT61, Fn 28h Set Text Language */
/* INT61, Fn 28h Set Keyboard Language */
/* INT61, Fn 28h Get Text Table Pointer */
/* INT61, Fn 28h Get Keyboard Table Ponter */

/* INT61, Fn 2Ch Get BIOS Version */

/* INT61, Fn30h Transmit Block */
/* INT61, Fn30h Recieve Block */
/* INT61, Fn30h Open Port */
/* INT61, Fn30h Close Port */
/* INT61, Fn30h Delay 500 mS */

pofo_LPTdelay500mS()
{
  extern unsigned _rax;
  _rax= (0x30<<8) + 4;
  _doint(0x61);
}

