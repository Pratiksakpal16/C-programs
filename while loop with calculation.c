#include<stdio.h>
#include<conio.h>
void main()
{
	int x=1,n,r;
	printf("Enter a number:");
	scanf("%d",&n);
	while(x<=10)
	{
		r=n*x;
		printf("\n%d*",n);
		printf("%d=",x);
		printf("%d",r);
		x++;
	}
	getch();
}
