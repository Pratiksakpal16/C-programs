#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	int len;
	printf("Enter the first string\n");
	scanf("%s",a);
	len=strlen(a);
	strcpy(b,a);
	printf("Copy string is %s",b);
	printf("Length of string is %d",len);
	getch();

}
