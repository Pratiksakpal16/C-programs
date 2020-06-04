#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int l=0;
	printf("\n\nFind the length of the string :\n");
	printf("Input the string :\n");
	fgets(str,sizeof str,stdin);
	while(str[l]!='\0')
	{
		l++;
	}
	printf("Length of string is : %d\n\n",l-1);
	
}
