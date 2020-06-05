#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("\n Enter number with in one to seven:");
	scanf("%d",&a);
	printf("you have entered a number is %d\n",a);
	switch(a)
	{
		case 1:printf("you have selected monday");
		break;
		case 2:printf("you have selected tuesday");
		break;
		case 3:printf("you have selected wednesday");
		break;
		case 4:printf("you have selected thursday");
		break;
		case 5:printf("you have selected friday");
		break;
		case 6:printf("you have selected saturday");
		break;
		case 7:printf("you have selected sunday");
		break;
		default:printf("wrong choice");
	}
	getch();
}
