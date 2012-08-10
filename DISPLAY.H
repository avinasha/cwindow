#include<stdlib.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>


/*
  Function to print a window of any color on screen
	    as specified by the user
      Written By: Avinasha.S and Rohit R Prabhu
	       Date: 14/7/2006
*/
void win(int l,int t,int r,int b,int color)
{
 int i,j;
 textcolor(color);
 for(i=l;i<r;i++)
  {
   for(j=t;j<b;j++)
   {
    gotoxy(i,j);
    cprintf("%c",219);
   }
  }
}


/*
  Function to print a window of any color on screen
	    as specified by the user
	     Written By: Avinasha.S and Rohit R Prabhu
		Date: 14/7/2006
  Working:
      Enter the coordinates of window for
      which you are putting the border.
      Set textbackground as window color
      before calling this function.
*/

 void bod(int l,int t,int r,int b,int color)
 {
  int i;
  textcolor(color);
  gotoxy(l,t);
  cprintf("%c",218);
  gotoxy(r-1,t);
  cprintf("%c",191);
  gotoxy(l,b-1);
  cprintf("%c",192);
  gotoxy(r-1,b-1);
  cprintf("%c",217);
  for(i=l+1;i<=r-2;i++)
  {
   gotoxy(i,t);
   cprintf("%c",196);
  }
  for(i=t+1;i<=b-2;i++)
  {
   gotoxy(r-1,i);
   cprintf("%c",179);
  }
  for(i=r-2;i>=l+1;i--)
  {
   gotoxy(i,b-1);
   cprintf("%c",196);
  }
  for(i=b-2;i>=t+1;i--)
  {
   gotoxy(l,i);
   cprintf("%c",179);
  }
 }

/*
  Function to print a window of any color on screen
	    as specified by the user
	     Written By: Avinasha.S and Rohit R Prabhu
		Date: 14/7/2006
  Working:
      Enter the coordinates of window for
      which you are putting the border.
      Set textbackground as window color
      before calling this function.
*/


	void backs(int color1,int color2)
	{
	  int i=1;
	  _setcursortype(_NOCURSOR);
	  for(i=1;i<2350; i++)
	   {
	    textcolor(color1);
	    cprintf("%c",219);
	   }
	  for(i=3;i<25;i++)
	   {
	    gotoxy(2,i);
	    textbackground(color1);
	    textcolor(color2);
	 cprintf("%c",186); //º
	 }
	 gotoxy(2,25);
	 textbackground(color1);
	 textcolor(color2);
	 cprintf("%c",200);//È
	 gotoxy(79,25);
	 textbackground(color1);
	 textcolor(color2);
	 cprintf("%c",188);//¼
	 gotoxy(2,2);
	 textbackground(color1);
	 textcolor(color2);
	 cprintf("%c",201);//É
	 gotoxy(79,2);
	 textbackground(color1);
	 textcolor(color2);
	 cprintf("%c",187);
	 for(i=3;i<79;i++)
	 {
	 gotoxy(i,2);
	 textbackground(color1);
	 textcolor(color2);
	 cprintf("%c",205);//Í
	 }
	 for(i=3;i<25;i++)
	 {
	 gotoxy(79,i);
	 textbackground(color1);
	 textcolor(color2);
	 cprintf("%c",186); //º
	 }
	 for(i=3;i<79;i++)
	 {
	 gotoxy(i,25);
	 textbackground(color1);
	 textcolor(color2);
	 cprintf("%c",205);
	 }
	 }


/*
Function to print a window of any color on screen having dissolve effect
		 as specified by the user
		 Written By: Avinasha.S
		    Date: 03/8/2006
*/

void dissolve(int l,int t,int r,int b,int c)
{
 int i,j,area,cou=0;
 _setcursortype(_NOCURSOR);
 textcolor(c);
 area=(r-l)*(b-t);
 randomize();
 do
 {
  i=random(r);
  j=random(b);
  if(i<l||j<t)
  continue;
  else
  {
  gotoxy(i,j);
  cprintf("%c",219);
  cou++;
  }
  delay(6);
 }while(cou<=area);
 win(l,t,r,b,c);
 }

/*
  Function to project a window of any color on screen
	       as specified by the user
	 Written By: Avinasha.S and Rohit R Prabhu
		  Date: 3/8/2006
*/



	  void fro(int c1,int c2,int c3)
	  {
	   int i,j,k,l;
	   for(i=40,j=14,k=40,l=14;i>2,j>2,k<76,l<22;i--,k++)
	   {
	    win(i,j,k,l,c1);
	    textbackground(c3);
	    bod(i,j,k,l,c2);
	    if(i%4==0)
	    {
	    j--;
	    l++;
	    }
	    delay(10);
	    }
	   }

/*
  Function to cascade a window of any color on screen
	    as specified by the user
	     Written By: Avinasha.S and Rohit R Prabhu
		Date: 3/8/2006
*/


	    void cascade(int c1,int c2,int c3)
	     {
	       int l,m;
	       for(l=40,m=6;l>=30,m<=13;l--,m++)
	       {
		 win(l-2,m-1,l+20,m+5,c1);
		 textbackground(c3);
		 bod(l-2,m-1,l+20,m+5,c2);
		 gotoxy(l,m);
		 delay(10);
	       }
	     }
/*
  Function to decascade a cascaded window of any color on screen
	    as specified by the user
	     Written By: Avinasha.S and Rohit R Prabhu
		Date: 3/8/2006
	     c=colour of bkg,tim=delay,op=0=>fulldecascade
*/


	     void decascade(int c,int tim,int op)
	      {
	       int l,m,i,j;
	       for(l=40,m=5;l>30,m<12;l--,m++)
		{
		 for(i=l-3;i<l+20;i++)
		  {
		   textcolor(c);
		   gotoxy(i,m);
		   cprintf("%c",219);
		  }
		 for(j=m;j<m+5;j++)
		  {
		   textcolor(c);
		   gotoxy(i,j);
		   cprintf("%c",219);
		  }
		 delay(tim);
		}
	       for(j=m;j<m+5;j++)
		{
		 textcolor(c);
		 gotoxy(l+20,j);
		 cprintf("%c",219);
		}
	       if(op==0)
		win(l-2,m-1,l+20,m+6,c);
	      }