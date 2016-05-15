/* Test Programm */
#include "stdio.h"
#include "libpofo.h"

main()
{
  int size=0;
  char tmp;

  /* Init (INT61h, Fn00h) */
  int61_init();

  printf("----=< DISK >=--------------------------\n");

  /* Size of RAM-Disk (INT61h, Fn07h) */
  size = int61_getDiskSize();
  printf("RAM Disk : %d k\n", size);

  /* CCM Status (INT61h, Fn0Bh) */
  tmp = int61_checkCard(0);
  printf("Drive A  : ");
  if(tmp == 0) {
    printf("OK\n");
  } else {
    printf("Error %#x\n", tmp);
  }
  tmp = int61_checkCard(1);
  printf("Drive B  : ");
  if(tmp == 0) {
    printf("OK\n");
  } else {
    printf("Error %#x\n", tmp);
  }
  int61_delay500mS();
  int61_delay500mS();
  int61_delay500mS();
  int61_delay500mS();

  printf("----=< SCREEN >=------------------------\n");

  /* Screen Size (INT61h, Fn0Dh) */
  size = int61_getScreenSize(0);
  tmp = size;
  printf("Physical Size: %d x %d\n", tmp, (size >> 8));
  size = int61_getScreenSize(1);
  tmp = size;
  printf("Logical Size : %d x %d\n", tmp, (size >> 8));
  tmp = int61_getScreenMode();

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
  tmp = int61_setCursorMode(2);
  tmp = int61_getCursorMode();
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
  size = int61_getVirtualScreen();
  tmp = size;
  printf("Virtual Pos  : %d,%d\n", tmp, (size >> 8));

  int61_delay500mS();
  int61_delay500mS();
  int61_delay500mS();
  int61_delay500mS();

  printf("----=< AUDIO >=-------------------------\n");
  char tones[25]= {0x30, 0x31, 0x32, 0x33, 0x34,
                   0x35, 0x36, 0x37, 0x38, 0x39,
                   0x3A, 0x29, 0x3B, 0x3C, 0x3D,
                   0x0E, 0x3E, 0x2C, 0x3F, 0x04,
                   0x05, 0x25, 0x2F, 0x06, 0x07 };
  for(tmp=0; tmp<25; tmp++) {
    int61_makeTone(tones[tmp], 5);
  }
  for(tmp=0; tmp<25; tmp++) {
    int61_makeTone(tones[24-tmp], 5);
  }

  printf("----=< BIOS >=--------------------------\n");
  size = int12_getMemorySize();
  printf("Total Memory: %d kB\n", size);

}
