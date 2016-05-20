/* C Library for the ATARI Portfolio */
/* Interrupt 10: BIOS Video Functions */
/* INT10, Fn 02h Set Cursor Position */
pofo_setCursorPos(x, y);
/* INT10, Fn 03h Get Cursor Position */
unsigned pofo_getCursorPos();
/* INT10, Fn 03h Get Cursor Shape */
unsigned pofo_getCursorShape();
/* INT10, Fn 0Ch Set Pixel */
pofo_putPixel(x, y, p);
/* INT10, Fn 0Dh Get Pixel */
char pofo_getPixel(x, y);
/* INT10, Fn 00h, Set Video Mode */
pofo_setMode(mode);
/* INT10, Fn 0Fh, Get Video Mode */
char pofo_getMode();
/* Interrupt 11: BIOS Get Equipment List */
/* INT11, Fn 00h Get Equipment List from BIOS */
unsigned pofo_getEquipmentList();
/* INT11, Fn 00h Get Number of Floppy Drives */
char pofo_getFloppies();
/* INT11, Fn 00h Get Number of Serial Ports */
char pofo_getComports();
/* INT11, Fn 00h Get Number of Parallel Ports */
char pofo_getParports();
/* Interrupt 12: BIOS Get Memory Size */
/* INT12, Fn 00h Get Total Memory from BIOS */
int pofo_getTotalMemory();
/* Interrupt 16: BIOS Keyboard Functions */
/* INT16, Fn 00h Get Keystroke */
char pofo_getKeystroke();
/* INT16, Fn 00h Get Scancode */
char pofo_getScancode();
/* Interrupt 1A: BIOS Time Functions */
/* INT1A, Fn 00 Get System Time */
long pofo_getTicks();
/* INT1A, Fn 01h Set System Time */
pofo_setTicks(ticks);
/* INT1A, Fn 02 Get Real Time Clock Time */
pofo_getRealTime(dest);
/* INT1A, Fn 04 Get Real Time Clock Date */
pofo_getSystemDate(dest);
/* Interrupt 21: DOS Functions */
/* INT21, Fn 1A Set DTA Buffer */
pofo_dosSetDTA(ptr);
/*INT21, Fn 2Bh DOS Set System Date */
pofo_setSystemDate(y, m, d);
/* INT21, Fn 2Dh DOS Set System Time */
pofo_SetRealTime(h, m, s);
/* INT21, Fn 4E Find First File */
int pofo_dosFindFirstFile(ptr, atr);
/* INT21, Fn 4F Find Next File */
int pofo_dosFindNextFile(atr);
/* Interrupt 60: Portfolio Interface Functions */
/* INT60, Fn 00h Get OS Version */
pofo_getVersion(dest);
/* Interrupt 61: Portfolio Special Functions */
/* INT61, Fn 00h Init */
void pofo_int61Init();
/* INT61, Fn 07h Format CCM */
char pofo_formatCCM(drive);
/* INT61, Fn 08h Get RAM Disk size */
int pofo_getDiskSize();
/* INT61, Fn 09h Format RAM Disk */
char pofo_formatRAM(size);
/* INT61, Fn 0Bh Detect CCM Cards */
char pofo_checkCard(drive);
/* INT61, Fn0Dh Get Screen Size */
int pofo_getScreenSize(sw);
/* INT61, Fn0Eh Get Screen Mode */
char pofo_getScreenMode();
/* INT61, Fn0Eh Set Screen Mode */
char pofo_setScreenMode(mode);
/* INT61, Fn0Fh Get Cursor Mode */
char pofo_getCursorMode();
/* INT61, Fn0Fh Set Cursor Mode */
char pofo_setCursorMode(mode);
/* INT61, Fn10h Get Virual Screen Pos */
int pofo_getVirtualScreen();
/* INT61, Fn10h Set Virual Screen Pos */
int pofo_setVirtualScreen(row, col);
/* INT61, Fn11h Move Virtual Screen */
pofo_moveVirtualScreen(dir, dist);
/* INT61, Fn12h ScreenRefresh */
pofo_screenRefresh();
/* INT61, Fn 15h Sound Settings */
pofo_setSound(func);
/* INT61, Fn 16h Tone Generator */
pofo_makeTone(tone, dur);
/* INT61, Fn 19h Get Serial Parameter */
char pofo_getSerialParam(port);
/* INT61, Fn 1Ah Get Peripheral ID */
char pofo_getPeripheralID();
/* INT61, Fn 1Eh Get Tick Speed */
char pofo_getTickSpeed();
/* INT61, Fn 1Eh Set Tick Speed */
pofo_setTickSpeed(speed);
/* INT61, Fn 2Dh Turn System Off */
pofo_turnOff();
/* INT61, Fn 2Eh Disable Status Line */
pofo_disableStatus();
/* INT61, Fn 2Eh Enable Status Line */
pofo_enableStatus(row, col);
/* INT61, Fn30h Delay 500 mS */
pofo_LPTdelay500mS();
/* INT61, Fn 24h Get ROM Space State */
char pofo_getRomState();
/* INT61, Fn 24h Set ROM Space State */
char pofo_setRomState(state);
/* INT61, Fn 24h Get CCM Space State */
char pofo_getCcmState();
/* INT61, Fn 24h Set CCM Space State */
char pofo_setCcmState(state);
/* Hardware: Functions that directly access the Hardware */
/* HWasm, LCD Put Pixel */
pofo_HWputPixel(x, y, p);
/* HWadr, 8060h Get LCD Contrast */
char pofo_getContrast();
/* HWadr, 8060h Set LCD Contrast */
pofo_setContrast(cont);
/* Helpers: Usefull small Functions */
/* Helper, convert 4 bytes to long */
long charToLong(byte0, byte1, byte2, byte3);
/* Helper, convert 2 bytes to int */
int charToInt(byte0, byte1);
/* Helper, convert BCD to decimal value */
char bcd2dec(bcd);
/* Helper, convert decimal value to BCD */
char dec2bcd(dec);
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
/* INT61, Fn 26h Get Power Control */
/* INT61, Fn 26h Set Power Control */
/* INT61, Fn 28h Get Text Language */
/* INT61, Fn 28h Get Keyboard Language */
/* INT61, Fn 28h Set Text Language */
/* INT61, Fn 28h Set Keyboard Language */
/* INT61, Fn 28h Get Text Table Pointer */
/* INT61, Fn 28h Get Keyboard Table Ponter */
/* INT60, Fn 08h Save Screen */ 
pofo_saveScreenArea(sy,sx,ey,ex,buf);
/* INT60, Fn 08h Restore Screen */
pofo_restoreScreenArea(sy,sx,ey,ex,buf);
/* INT21, Fn30h DOS Get DOS Version */
unsigned pofo_getDosVersion();
