/*********************************************************************
;  PutPixel:
;
; Diese Routine kann anstelle der Funktion 0Ch des BIOS-Interrupts 10h
; eingesetzt werden.
;
; Vorteil:   deutlich schneller als INT 10h
; Nachteil:  aktualisiert nicht den Grafikspeicher bei B000:0000
; Autor:     Klaus Peichl
  Modifiziert von SolderGirl
; Copyright: Public domain
;
; *********************************************************************/

hw_putPixel(x, y, p)
    char x;
    char y;
    char p;
{
int a, b, c;
a=y*30;
b=x/8;
if(p>0)
  { c=15; }
else
  { c=14; }
#asm
  push ax
  push bx
  push cx
  push dx

  mov cx,#x
  mov ax,#p
  mov ah,cl
  and ah,7                ; ah = x mod 8
  mov bx,#b
  add bx,#a
  mov dx,8011h
  mov al,10
  out dx,al
  dec dx
  mov al,bl
  out dx,al               ; Cursoradresse low setzen
  inc dx
  mov al,11
  out dx,al
  dec dx
  mov al,bh
  out dx,al               ; Cursoradresse high setzen
  inc dx
  mov al,#c               ; 15 = Pixel setzen  14 = l”schen
  out dx,al
  dec dx
  mov al,ah
  out dx,al

  pop dx
  pop cx
  pop bx
  pop ax
#
}
