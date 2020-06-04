#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,choice,add,sub,div,mul;
	printf("\n Enter 1st number:");
	scanf("%d",&a);
	printf("\n Enter 2nd number:");
	scanf("%d",&b);
	printf("\n Press 1 for addition \n Press 2 for subtraction \n Press 3 for multiplication \n Press 4 for divison \n");
	scanf("%d",&choice);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	switch(choice)
	{
	case 1:printf("addition of two num is %d",add);
	break;
	case 2:printf("subtraction of two num is %d",sub);
	break;
	case 3:printf("multiplication of two num is %d",mul);
	break;
	case 4:printf("divison of two num is %d",div);
	break;
	default:printf("wrong choice");
    }
	getch();
}
