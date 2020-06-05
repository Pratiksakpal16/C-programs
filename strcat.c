#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	printf("Enter the first string\n");
	scanf("%s",a);
	printf("Enter the second string\n");
    scanf("%s",b);
    strcat(a,b);
    printf("Concatenation of string is %s",a);
    getch();
}
