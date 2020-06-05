#include<stdio.h>
#include<conio.h>
void main()
{
	char in_char;
	printf("\n Enter a character in lower case:");
	scanf("%c",&in_char);
	if(in_char=='a' || in_char=='A')
	printf("\n The character input is a vowel a\n");
	else if(in_char=='e' || in_char=='E')
	printf("\n The character input is a vowel e\n");
	else if(in_char=='i'|| in_char=='I')
	printf("\n The character input is a vowel i\n");
	else if(in_char=='o' || in_char=='O')
	printf("\n The character input is a vowel o\n");
	else if(in_char=='u' || in_char=='U')
	printf("\n The character input is a vowel u\n");
	else
	printf("\n The character input is not a vowel\n");
	getch();
}
