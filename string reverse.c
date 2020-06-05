#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[20];
	printf("Enter the first string\n");
	scanf("%s",a);
	strrev(a);
	printf("Reverse string is %s",a);
	getch();
}
