#include<stdio.h>
#include<conio.h>
void main()
  {
 int a=1000,b=20,c=80,d=50;
  clrscr();

  if(a>b)
   {
	if(a>c)
	{
		if(a>d)
		{
		   printf("a is max ");
		}
		else
		{
		   printf(" d is max");
		}
	}
	else
	{
	 printf("c is max ");
	}
   }
   else
   {
   printf("b  is max ");
   }


   getch();
   }