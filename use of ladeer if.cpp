#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,num3;
	printf("\n Enter 3 numbers");
	scanf("%d%d%d",&num1,&num2,&num3);
	if((num1>num2)&&(num1>num3))
	printf("\n the largest of three numbers is %d\n",num1);
		if((num2>num1)&&(num2>num3))
	printf("\n the largest of three numbers is %d\n",num2);
    	if((num3>num1)&&(num3>num2))
	printf("\n the largest of three numbers is %d\n",num3);
	return 0;
}

