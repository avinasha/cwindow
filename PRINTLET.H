#include<letter.h>
#include<stdio.h>
void blocklet(char stri[],int y,int x,int c1,int c2,int s)
{
 int i,temp1;
 char temp;
 temp1=y;
 for(i=0;stri[i]!='\0';i++)
 {
  if(y>75)
  {
  x=x+6;
  y=temp1;
  }
  switch(stri[i])
  {
   case 'a':
   case 'A': letA(y,x,c1,c2,s);break;
   case 'b':
   case 'B': letB(y,x,c1,c2,s);break;
   case 'c':
   case 'C': letC(y,x,c1,c2,s);break;
   case 'd':
   case 'D': letD(y,x,c1,c2,s);break;
   case 'e':
   case 'E': letE(y,x,c1,c2,s);break;
   case 'f':
   case 'F': letF(y,x,c1,c2,s);break;
   case 'g':
   case 'G': letG(y,x,c1,c2,s);break;
   case 'h':
   case 'H': letH(y,x,c1,c2,s);break;
   case 'i':
   case 'I': letI(y,x,c1,c2,s);break;
   case 'j':
   case 'J': letJ(y,x,c1,c2,s);break;
   case 'k':
   case 'K': letK(y,x,c1,c2,s);break;
   case 'l':
   case 'L': letL(y,x,c1,c2,s);break;
   case 'm':
   case 'M': letM(y,x,c1,c2,s);break;
   case 'n':
   case 'N': letN(y,x,c1,c2,s);break;
   case 'o':
   case 'O': letO(y,x,c1,c2,s);break;
   case 'p':
   case 'P': letP(y,x,c1,c2,s);break;
   case 'q':
   case 'Q': letQ(y,x,c1,c2,s);break;
   case 'r':
   case 'R': letR(y,x,c1,c2,s);break;
   case 's':
   case 'S': letS(y,x,c1,c2,s);break;
   case 't':
   case 'T': letT(y,x,c1,c2,s);break;
   case 'u':
   case 'U': letU(y,x,c1,c2,s);break;
   case 'v':
   case 'V': letV(y,x,c1,c2,s);break;
   case 'w':
   case 'W': letW(y,x,c1,c2,s);break;
   case 'x':
   case 'X': letX(y,x,c1,c2,s);break;
   case 'y':
   case 'Y': letY(y,x,c1,c2,s);break;
   case 'z':
   case 'Z': letZ(y,x,c1,c2,s);break;
   case ' ': break;
   default:letqt(y,x,c1,c2,s);
  }
  if(stri[i]==' ')
  y=y+4;
  else
  y=y+6;
  fflush(stdin);
 }
}