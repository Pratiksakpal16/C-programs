#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int l=0;
	printf("\n\nSeparate the individual characters from a string :\n");
	printf("Input the string :\n");
	fgets(str,sizeof str,stdin);
	while(str[l]!='\0')
	{
		printf("%c ",str[l]);
		l++;
	}
	printf("\n");
	
}
