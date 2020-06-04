#include<stdio.h>
#include<conio.h>
void main()
{
	int x[2][3];
	x[0][0]=10;
	x[0][1]=20;
	x[0][2]=30;
	printf("%d",x[0][0]);
	printf("%d",x[0][1]);
	printf("%d",x[0][2]);
	x[1][0]=40;
	x[1][1]=50;
	x[1][2]=60;
	printf("\n%d",x[1][0]);
	printf("%d",x[1][1]);
	printf("%d",x[1][2]);
	getch();
}
