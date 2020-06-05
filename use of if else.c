#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,sum;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	if(sum>100)
	{
	
	printf("\n the sum of two numbers is greater than 100\n");
}
else
{

    printf("\n the sum of two numbers is smaller than 100\n");
}
    getch();
}

