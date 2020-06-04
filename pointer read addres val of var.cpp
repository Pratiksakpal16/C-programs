#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10;
	int*p;
	p=&a;
    printf("value of a =%d",*p);
	printf("address of a =%u",p);
	getch();
}
