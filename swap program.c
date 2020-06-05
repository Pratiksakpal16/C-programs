#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\n enter the first number:");
scanf("%d",&a);
printf("\n enter the second number:");
scanf("%d",&b);
printf("\n printing the numbers before interchanging");
printf("\n the first number is: %d",a);
printf("\n the second number is: %d",b);
c=a;
a=b;
b=c;
printf("\n printing the numbers before interchanging");
printf("\n the first number is: %d",a);
printf("\n the second number is: %d",b);
getch();
}
