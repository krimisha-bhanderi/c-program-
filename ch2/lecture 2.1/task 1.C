#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
clrscr();
printf("enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
printf("\nThe sum of a and b is:%d",a+b);
printf("\nThe sub of a and b is:%d",a-b);
printf("\nThe multiple of a and b is:%d",a*b);
printf("\nThe divide of a and b is:%d",a/b);
printf("\nThe modulo of a and b is:%d",a%b);
getch();
}