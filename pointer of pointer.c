#include<stdio.h>
#include<conio.h>
void main()
{
	int x,*p1,**p2;
	x=5;
	p1=&x;
	p2=&p1;
	printf("x=%d",x);
	printf("address of x=%u",&x);
	printf("address of p1=%u",p1);
	printf("address of p2=%u",p2);
	getch();
}
