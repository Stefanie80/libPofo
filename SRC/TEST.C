/* Test Programm */
#include "stdio.h"
#include "libpofo.h"

main()
{
  unsigned itmp;
  int size=0;
  char tmp;
  char buff[10];
  pofo_getVersion(&buff);

  /* Init (INT61h, Fn00h) */
  pofo_int61Init();

  printf("----=< DISK >=-------------------------\n");

  /* Size of RAM-Disk (INT61h, Fn07h) */
  size = pofo_getDiskSize();
  printf("RAM Disk : %d k\n", size);

  /* CCM Status (INT61h, Fn0Bh) */
  tmp = pofo_checkCard(0);
  printf("Drive A  : ");
  if(tmp == 0) {
    printf("OK\n");
  } else {
    printf("Error %#x\n", tmp);
  }
  tmp = pofo_checkCard(1);
  printf("Drive B  : ");
  if(tmp == 0) {
    printf("OK\n");
  } else {
    printf("Error %#x\n", tmp);
  }

  printf("Press any Key");
  tmp = pofo_getKeystroke();
  printf("\n----=< SCREEN >=-----------------------\n");

  /* Screen Size (INT61h, Fn0Dh) */
  size = pofo_getScreenSize(0);
  tmp = size;
  printf("Physical Size: %d x %d\n", tmp, (size >> 8));
  size = pofo_getScreenSize(1);
  tmp = size;
  printf("Logical Size : %d x %d\n", tmp, (size >> 8));
  tmp = pofo_getScreenMode();

  /* Screen Mode (INT61h, Fn0Eh) */
  printf("Screen Mode  : %#x ", tmp);
  switch(tmp) {
    case 0x00:
      printf("(80x25\n");
      break;
    case 0x01:
      printf("(40x8)\n");
      break;
    case 0x02:
      printf("(Tracked)\n");
      break;
    case 0x80:
      printf("(Graphic)\n");
      break;
    default:
      printf("(Invalid!)\n");
      break; 
  }

  /* Cursor Mode (INT61h, Fn0Fh) */
  tmp = pofo_setCursorMode(2);
  tmp = pofo_getCursorMode();
  printf("Cursor Mode  : %#x ", tmp);
  switch(tmp) {
    case 0:
      printf("(Off)\n");
      break;
    case 1:
      printf("(Underline)\n");
      break;
    case 2:
      printf("(Block)\n");
      break;
    default:
      printf("(Invalid!)\n");
      break;
  }

  /* Virtual Screen Pos (INT61h, Fn10h) */
  size = pofo_getVirtualScreen();
  tmp = size;
  printf("Virtual Pos  : %d,%d\n", tmp, (size >> 8));

  printf("Press any Key");
  tmp = pofo_getKeystroke();
  printf("\n----=< AUDIO >=------------------------\n");
  char tones[25]= {0x30, 0x31, 0x32, 0x33, 0x34,
                   0x35, 0x36, 0x37, 0x38, 0x39,
                   0x3A, 0x29, 0x3B, 0x3C, 0x3D,
                   0x0E, 0x3E, 0x2C, 0x3F, 0x04,
                   0x05, 0x25, 0x2F, 0x06, 0x07 };
  char dtmf[16]=  {0x10, 0x11, 0x12, 0x13, 0x14,
                   0x15, 0x16, 0x17, 0x18, 0x19,
                   0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F};
  char klick[6]=  {0x80, 0x01, 0x10, 0xA1, 0xA3, 0xA4};
  char midl[9]=   {0xAB, 0x49, 0x4A, 0x2E, 0x2A,
                   0x4C, 0x2B, 0x0F, 0x27};
  char anschl[14]={0xB2, 0xB3, 0xB4, 0xB5, 0xB6,
                   0xB7, 0xB8, 0xB9, 0xBA, 0xBB,
                   0xBC, 0xBD, 0xBE, 0xBF};
  printf("Melody Sounds:\n");
  for(tmp=0; tmp<25; tmp++) {
    pofo_makeTone(tones[tmp], 5);
  }
  for(tmp=0; tmp<25; tmp++) {
    pofo_makeTone(tones[24-tmp], 5);
  }
  printf("Klick Melody Sounds:\n");
  for(tmp=0; tmp<14; tmp++) {
    pofo_makeTone(anschl[tmp], 5);
  }
  for(tmp=0; tmp<14; tmp++) {
    pofo_makeTone(anschl[13-tmp], 5);
  }

  printf("Other melody Sounds:\n");
  for(tmp=0; tmp<9; tmp++) {
    pofo_makeTone(midl[tmp], 10);
  }
  for(tmp=0; tmp<9; tmp++) {
    pofo_makeTone(midl[8-tmp], 10);
  }
  printf("DTMF Sounds:\n");
  for(tmp=0; tmp<16; tmp++) {
    pofo_makeTone(dtmf[tmp], 10);
  }
  for(tmp=0; tmp<16; tmp++) {
    pofo_makeTone(dtmf[15-tmp], 10);
  }
  printf("Klick Sounds:\n");
  for(tmp=0; tmp<6; tmp++) {
    pofo_makeTone(klick[tmp], 10);
  }
  for(tmp=0; tmp<6; tmp++) {
    pofo_makeTone(klick[5-tmp], 10);
  }

  printf("Press any Key");
  tmp = pofo_getKeystroke();
  printf("\n----=< BIOS >=-------------------------\n");
  printf("OS Version: ");
  puts(buff);
  size = pofo_getTotalMemory();
  itmp = pofo_getEquipmentList();
  if(itmp & 0x02) {
    /* this should never happen on a pofo */
    printf("80x87 Coprocessor present!\n");
    printf("Please email tsteffi@gmx.de\n");
    printf("And tell me how you did this!\n");
    }

  tmp=(itmp & 0x0C) >> 2;
  printf("%u RAM Banks, %d kB\n",tmp, size);
  tmp=pofo_getFloppies();
  printf("%u Floppy Drive(s) installed\n",tmp);
  tmp=pofo_getComports();
  printf("%u COM Port(s) installed\n",tmp);
  tmp=pofo_getParports();
  printf("%u LPT Port(s) installed\n",tmp);

  printf("Press any Key");
  tmp = pofo_getKeystroke();
  printf("\n----=< GRAPHICS >=---------------------\n");
  printf("Painting Black with BIOS\n");
  printf("Clearing with Hardware\n");
  printf("Press any Key");
  tmp = pofo_getKeystroke();
  printf("\n%#.x is not the any Key ;)\n", tmp);
  tmp = pofo_getGfxMode();
  pofo_setGfxMode(0x0A);
  for(x=0; x<240; x++) {
    for(y=0; y<64; y++) {
      pofo_putPixel(x, y, 0xFF);
    }
  }
  for(x=0; x<240; x++) {
    for(y=0; y<64; y++) {
      pofo_HWputPixel(x, y, 0);
    }
  }
  pofo_setGfxMode(tmp);
}
