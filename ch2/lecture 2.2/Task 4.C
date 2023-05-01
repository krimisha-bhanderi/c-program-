#include<stdio.h>
#include<conio.h>
main()
{  int p,r,t;
   clrscr();

   printf("Enter principal amount:");
   scanf("%d",&p);
   printf("Enter rate of interest:");
   scanf("%d",&r);
   printf("Enter time:");
   scanf("%d",&t);

   printf("The value of simple interest:%f",p*r*t/100);
   getch();
 }

