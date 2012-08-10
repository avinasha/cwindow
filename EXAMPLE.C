#include<stdio.h>
#include<display.h>
#include<ctype.h>
#include<string.h>
#include<printlet.h>

void Login()
{
 char loginID[10];
 //_setcursortype(_SOLIDCURSOR);
 backs(7,0);
 win(16,8,65,18,1);
 textbackground(1);
 bod(16,8,65,18,14);
 gotoxy(18,9);
 textcolor(14);
 cprintf("Login:");
 gotoxy(20,13);
 cprintf("Enter the Login ID:  ______________");
 gotoxy(42,13);
 getch();
 clrscr();
 backs(7,0);
 dissolve(16,8,65,18,1);
 getch();
 clrscr();
 backs(7,0);
 fro(1,15,1);
 getch();
 clrscr();
 backs(7,0);
 cascade(1,15,1);
 getch();
 decascade(7,100,1);
 getch();
 backs(7,0);
 blocklet("HELLO WORLD",5,5,7,12,128);
 getch();
}

void main()
{
 Login();
}