/*
  Function to print letters of any color on screen
	    as specified by the user
	   Written By: Avinasha.S
	       Date: 14/7/2006
  Note:
       Good Styles are as follows
       __________________________
	  1.219Û
	  2.220Ü
	  3.221Ý
	  4.222Þ
	  5.223ß
	  6.254þ
	  7.176°
	  9.177±
	 10.178²
	 11.179³
	 12.196Ä
	 13.249ù
	 14.248ø
	 15.240ð
	 16.167§
    Or be happy to try any number between 0-255
*/
#include<conio.h>
void letA(int y,int x,int c1,int c2,int s)
{
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 gotoxy(y+2,x);cprintf("%c",s);
 gotoxy(y+1,x+1);cprintf("%c",s);
 gotoxy(y+3,x+1);cprintf("%c",s);
 gotoxy(y,x+2);cprintf("%c",s);
 gotoxy(y,x+3);cprintf("%c",s);
 gotoxy(y,x+4);cprintf("%c",s);
 gotoxy(y+4,x+2);cprintf("%c",s);
 gotoxy(y+4,x+3);cprintf("%c",s);
 gotoxy(y+4,x+4);cprintf("%c",s);
 gotoxy(y+1,x+2);cprintf("%c",s);
 gotoxy(y+2,x+2);cprintf("%c",s);
 gotoxy(y+3,x+2);cprintf("%c",s);
}


void letG(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=1;i<5;i++)
 {
  gotoxy(y+i,x);cprintf("%c",s);
 }
 for(i=1;i<4;i++)
 {
  gotoxy(y+i,x+4);cprintf("%c",s);
  gotoxy(y,x+i);cprintf("%c",s);
 }
 gotoxy(y+2,x+2);cprintf("%c",s);
 gotoxy(y+3,x+2);cprintf("%c",s);
 gotoxy(y+4,x+3);cprintf("%c",s);
 gotoxy(y+4,x+2);cprintf("%c",s);
}


void letE(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<5;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 gotoxy(y+i,x+2);cprintf("%c",s);
 gotoxy(y+i,x+4);cprintf("%c",s);
 }
 gotoxy(y,x+3);cprintf("%c",s);
 gotoxy(y,x+1);cprintf("%c",s);
}


void letF(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<5;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 gotoxy(y+i,x+2);cprintf("%c",s);
 }
 gotoxy(y,x+4);cprintf("%c",s);
 gotoxy(y,x+3);cprintf("%c",s);
 gotoxy(y,x+1);cprintf("%c",s);
}


void letC(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=1;i<5;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 gotoxy(y+i,x+4);cprintf("%c",s);
 }
 for(i=1;i<4;i++)
 {
 gotoxy(y,x+i);cprintf("%c",s);
 }
}


void letD(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<4;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 gotoxy(y+i,x+4);cprintf("%c",s);
 }
 for(i=1;i<4;i++)
 {
 gotoxy(y,x+i);cprintf("%c",s);
 gotoxy(y+4,x+i);cprintf("%c",s);
 }
}


void letB(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<4;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 gotoxy(y+i,x+2);cprintf("%c",s);
 gotoxy(y+i,x+4);cprintf("%c",s);
 }
 gotoxy(y,x+3);cprintf("%c",s);
 gotoxy(y,x+1);cprintf("%c",s);
 gotoxy(y+4,x+3);cprintf("%c",s);
 gotoxy(y+4,x+1);cprintf("%c",s);
}


void letI(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<5;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 gotoxy(y+i,x+4);cprintf("%c",s);
 gotoxy(y+2,x+i);cprintf("%c",s);
 }
}



void letT(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<5;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 gotoxy(y+2,x+i);cprintf("%c",s);
 }
}



void letJ(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<5;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 }
 for(i=0;i<4;i++)
 {
 gotoxy(y+2,x+i);cprintf("%c",s);
 }
 gotoxy(y+1,x+4);cprintf("%c",s);
 gotoxy(y,x+3);cprintf("%c",s);
}



void letL(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<5;i++)
 {
 gotoxy(y+i,x+4);cprintf("%c",s);
 gotoxy(y,x+i);cprintf("%c",s);
 }
}


void letH(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<5;i++)
 {
 gotoxy(y+i,x+2);cprintf("%c",s);
 gotoxy(y,x+i);cprintf("%c",s);
 gotoxy(y+4,x+i);cprintf("%c",s);
 }
}


void letV(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<3;i++)
 {
 gotoxy(y,x+i);cprintf("%c",s);
 gotoxy(y+4,x+i);cprintf("%c",s);
 }
 gotoxy(y+1,x+3);cprintf("%c",s);
 gotoxy(y+3,x+3);cprintf("%c",s);
 gotoxy(y+2,x+4);cprintf("%c",s);
}



void letU(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<4;i++)
 {
 gotoxy(y,x+i);cprintf("%c",s);
 gotoxy(y+4,x+i);cprintf("%c",s);
 }
 for(i=1;i<4;i++)
 {
 gotoxy(y+i,x+4);cprintf("%c",s);
 }
}



void letO(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=1;i<4;i++)
 {
 gotoxy(y,x+i);cprintf("%c",s);
 gotoxy(y+4,x+i);cprintf("%c",s);
 }
 for(i=1;i<4;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 gotoxy(y+i,x+4);cprintf("%c",s);
 }
}



void letP(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<4;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 gotoxy(y+i,x+2);cprintf("%c",s);
 }
 gotoxy(y,x+4);cprintf("%c",s);
 gotoxy(y,x+3);cprintf("%c",s);
 gotoxy(y,x+1);cprintf("%c",s);
 gotoxy(y+4,x+1);cprintf("%c",s);
}



void letR(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<4;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 gotoxy(y+i,x+2);cprintf("%c",s);
 }
 gotoxy(y,x+4);cprintf("%c",s);
 gotoxy(y,x+3);cprintf("%c",s);
 gotoxy(y,x+1);cprintf("%c",s);
 gotoxy(y+4,x+1);cprintf("%c",s);
 gotoxy(y+4,x+4);cprintf("%c",s);
 gotoxy(y+4,x+3);cprintf("%c",s);
}

void letX(int y,int x,int c1,int c2,int s)
{
 int i=0,j=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<5;i++)
 {
 gotoxy(y+i,x+i);cprintf("%c",s);
 }
 for(i=0,j=4;i<5;i++,j--)
 {
 gotoxy(y+j,x+i);cprintf("%c",s);
 }
}



void letY(int y,int x,int c1,int c2,int s)
{
 int i=0,j=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<3;i++)
 {
 gotoxy(y+i,x+i);cprintf("%c",s);
 }
 for(i=0,j=4;j>2;i++,j--)
 {
 gotoxy(y+j,x+i);cprintf("%c",s);
 }
 for(i=3;i<5;i++)
 {
  gotoxy(y+2,x+i);cprintf("%c",s);
 }
}


void letZ(int y,int x,int c1,int c2,int s)
{
 int i=0,j=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<5;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 gotoxy(y+i,x+4);cprintf("%c",s);
 }
 for(i=0,j=4;i<5;i++,j--)
 {
 gotoxy(y+j,x+i);cprintf("%c",s);
 }
}


void letS(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=1;i<5;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 }
 for(i=1;i<4;i++)
 {
 gotoxy(y+i,x+2);cprintf("%c",s);
 }
 for(i=0;i<4;i++)
 {
 gotoxy(y+i,x+4);cprintf("%c",s);
 }
 gotoxy(y,x+1);cprintf("%c",s);
 gotoxy(y+4,x+3);cprintf("%c",s);
}


void letQ(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=1;i<4;i++)
 {
 gotoxy(y,x+i);cprintf("%c",s);
 gotoxy(y+4,x+i);cprintf("%c",s);
 }
 for(i=1;i<4;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 gotoxy(y+i,x+4);cprintf("%c",s);
 }
 gotoxy(y+4,x+4);cprintf("%c",s);
 gotoxy(y+3,x+3);cprintf("%c",s);
}



void letM(int y,int x,int c1,int c2,int s)
{
 int i=0,j=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<3;i++)
 {
 gotoxy(y+i,x+i);cprintf("%c",s);
 }
 for(i=0,j=4;j>2;i++,j--)
 {
 gotoxy(y+j,x+i);cprintf("%c",s);
 }
 for(i=1;i<5;i++)
 {
  gotoxy(y,x+i);cprintf("%c",s);
  gotoxy(y+4,x+i);cprintf("%c",s);
 }
}



void letN(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<5;i++)
 {
 gotoxy(y+i,x+i);cprintf("%c",s);
 }
 for(i=0;i<5;i++)
 {
 gotoxy(y,x+i);cprintf("%c",s);
 gotoxy(y+4,x+i);cprintf("%c",s);
 }
}



void letW(int y,int x,int c1,int c2,int s)
{
 int i=0,j=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=4;i>1;i--)
 {
 gotoxy(y+i,x+i);cprintf("%c",s);
 }
 for(i=0,j=4;j>2;i++,j--)
 {
 gotoxy(y+i,x+j);cprintf("%c",s);
 }
 for(i=1;i<5;i++)
 {
  gotoxy(y,x+i);cprintf("%c",s);
  gotoxy(y+4,x+i);cprintf("%c",s);
 }
}



void letK(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<5;i++)
 {
 gotoxy(y,x+i);cprintf("%c",s);
 if(i!=2)
 {
  gotoxy(y+4,x+i);cprintf("%c",s);
 }
 }
 for(i=1;i<4;i++)
 {
 gotoxy(y+i,x+2);cprintf("%c",s);
 }
}



void letqt(int y,int x,int c1,int c2,int s)
{
 int i=0;
 c1=4;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1+128);
 for(i=1;i<4;i++)
 {
 gotoxy(y+i,x);cprintf("%c",s);
 }
 gotoxy(y,x+1);cprintf("%c",s);
 gotoxy(y+4,x+1);cprintf("%c",s);
 gotoxy(y+2,x+2);cprintf("%c",s);
 gotoxy(y+3,x+2);cprintf("%c",s);
 gotoxy(y+2,x+4);cprintf("%c",s);
 gotoxy(y+2,x+3);cprintf("%c",s);
}


void leta(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=1;i<4;i++)
 {
 gotoxy(y+i,x+1);cprintf("%c",s);
 gotoxy(y+i,x+3);cprintf("%c",s);
 gotoxy(y+i,x+4);cprintf("%c",s);
 }
 gotoxy(y+4,x+4);cprintf("%c",s);
 gotoxy(y+3,x+2);cprintf("%c",s);
}



void letb(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<5;i++)
 {
 gotoxy(y,x+i);cprintf("%c",s);
 gotoxy(y+i,x+2);cprintf("%c",s);
 gotoxy(y+i,x+4);cprintf("%c",s);
 }
 gotoxy(y+4,x+3);cprintf("%c",s);
}



void letc(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=1;i<4;i++)
 {
 gotoxy(y+i,x+1);cprintf("%c",s);
 gotoxy(y+i,x+4);cprintf("%c",s);
 }
 for(i=2;i<4;i++)
 {
 gotoxy(y,x+i);cprintf("%c",s);
 }
}



void letd(int y,int x,int c1,int c2,int s)
{
 int i=0;
 _setcursortype(_NOCURSOR);
 textbackground(c2);
 textcolor(c1);
 for(i=0;i<5;i++)
 {
 gotoxy(y+3,x+i);cprintf("%c",s);
 }
 for(i=0;i<4;i++)
 {
 gotoxy(y+i,x+2);cprintf("%c",s);
 gotoxy(y+i,x+4);cprintf("%c",s);
 }
 gotoxy(y,x+3);cprintf("%c",s);
 gotoxy(y+4,x+4);cprintf("%c",s);
}
