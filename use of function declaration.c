#include<stdio.h>
#include<conio.h>
float square(float x);
int main()
{
	float m,n;
	printf("\nEnter some number for findingsquare \n");
	scanf("%f",&m);
	n=square(m);
	printf("\nSquare of the given number %f is %f",m,n);
	return 0;
}
float square(float x)
{
	float p;
	p=x * x;
	return (p);
}
