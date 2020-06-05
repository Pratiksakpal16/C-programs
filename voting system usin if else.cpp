#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	char name;
	printf("\n Enter your name:");
	scanf("%s",&name);
	printf("\n Enter your age:");
	scanf("%d",&age);
	if(age>=19)
	{
		printf("\n you are eligible for voting\n");
	}
	else
	{
		printf("\n you are not eligible for voting\n");
	}
	
	return 0;
}
