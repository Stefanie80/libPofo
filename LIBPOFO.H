/* C Library for the ATARI Portfolio */

/* HWasm, LCD Put Pixel */
hw_putPixel(x, y, p);

/* INT10, Fn 0Ch Set Pixel */
int10_putPixel(x, y, p);

/* INT10, Fn 0Dh Get Pixel */
char int10_getPixel(x, y);

/* INT10, Fn 00h, Set Video Mode */
int10_setMode(mode);

/* INT10, Fn 0Fh, Get Video Mode */
char int10_getMode();

/* HWadr, 8060h Get LCD Contrast */
char pofo_getContrast();

/* HWadr, 8060h Set LCD Contrast */
pofo_setContrast(cont);

/* INT21, Fn 1A Set DTA Buffer */
int21_setDTA(ptr);

/* INT21, Fn 4E Find First File */
int int21_findFirstFile(ptr, atr);

/* INT21, Fn 4F Find Next File */
int int21_findNextFile(atr);

/* INT61, Fn 00h Init */
void int61_init();

/* INT61, Fn 07h Format CCM */
char int61_formatCCM(drive);

/* INT61, Fn 08h Get RAM Disk size */
int int61_getDiskSize();

/* INT61, Fn 09h Format RAM Disk */
char int61_formatRAM(size);

/* INT61, Fn 0Bh Detect CCM Cards */
char int61_checkCard(drive);

/* INT61, Fn0Dh Get Screen Size */
int int61_getScreenSize(sw);

/* INT61, Fn0Eh Get Screen Mode */
char int61_getScreenMode();

/* INT61, Fn0Eh Set Screen Mode */
char int61_setScreenMode(mode);

/* INT61, Fn0Fh Get Cursor Mode */
char int61_getCursorMode();

/* INT61, Fn0Fh Set Cursor Mode */
char int61_setCursorMode(mode);

/* INT61, Fn10h Get Virual Screen Pos */
int int61_getVirtualScreen();

/* INT61, Fn10h Set Virual Screen Pos */
int int61_setVirtualScreen(row, col);

/* INT61, Fn11h Move Virtual Screen */
int61_moveVirtualScreen(dir, dist);

/* INT61, Fn12h ScreenRefresh */
int61_screenRefresh();

/* INT61, Fn 15h Sound Settings */
int61_setSound(func);

/* INT61, Fn 16h Tone Generator */
int61_makeTone(tone, dur);

/* INT61, Fn 19h Get Serial Parameter */
char int61_getSerialParam(port);

/* INT61, Fn 1Ah Get Peripheral ID */
char int61_getPeripheralID();

/* INT61, Fn 1Eh Get Tick Speed */
char int61_getTickSpeed();

/* INT61, Fn 1Eh Set Tick Speed */
int61_setTickSpeed(speed);

/* INT61, Fn 2Dh Turn System Off */
int61_turnOff();

/* INT61, Fn 2Eh Disable Status Line */
int61_disableStatus();

/* INT61, Fn 2Eh Enable Status Line */
int61_enableStatus(row, col);

/* INT61, Fn30h Delay 500 mS */
int61_delay500mS();

/* INT12, Fn 00h Get Total Memory from BIOS */
int int12_getMemorySize();

/* Helper, convert 4 bytes to long */
long charToLong(byte0, byte1, byte2, byte3);

/* Helper, convert 2 bytes to int */
int charToInt(byte0, byte1);

/* Not implemented: */

/* INT61, Fn 2Ch Get BIOS Version */
/* INT61, Fn 17h Dial Number */
/* INT61, Fn 18h Get Mute States */
/* INT61, Fn 18h Set Mute States */
/* INT61, Fn 18h Get DTMF duration */
/* INT61, Fn 18h Set DTMF duration */
/* INT61, Fn30h Transmit Block */
/* INT61, Fn30h Recieve Block */
/* INT61, Fn30h Open Port */
/* INT61, Fn30h Close Port */
/* INT61, Fn 1Bh Set Peripheral ID */
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
