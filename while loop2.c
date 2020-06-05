#include<stdio.h>
#include<conio.h>
void main()
{
	int num1=1,num2=5,count=1;
	int product;
	while(count<=5)
	{
		product=num1*num2;
		printf("Product=%d\n,product");
		count=count+1;
		num1=num1+1;
	}
	getch();
}
