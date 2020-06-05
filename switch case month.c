#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("\n Enter number with in one to twelve:");
	scanf("%d",&a);
	printf("you have entered a number is %d\n",a);
	switch(a)
	{
		case 1:printf("you have selected january");
		break;
		case 2:printf("you have selected february");
		break;
		case 3:printf("you have selected march");
		break;
		case 4:printf("you have selected april");
		break;
		case 5:printf("you have selected may");
		break;
		case 6:printf("you have selected june");
		break;
		case 7:printf("you have selected july");
		break;
		case 8:printf("you have selected august");
		break;
		case 9:printf("you have selected september");
		break;
		case 10:printf("you have selected october");
		break;
		case 11:printf("you have selected november");
		break;
		case 12:printf("you have selected december");
		break;
		default:printf("wrong choice");
	}
	getch();
}
