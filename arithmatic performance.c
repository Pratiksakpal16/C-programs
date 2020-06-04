#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
int sum,multi,div,remainder,minus,increase,decrease;
c=25;
d=14;
printf("\nEnter First Number:");
scanf("%d",&a);
printf("\nEnter Second Number:");
scanf("%d",&b);
sum=a+b;
minus=a-b;
multi=a*b;
div=b/a;
remainder=a%b;
increase=++c;
decrease=--d;
printf("sum is %d\n",sum);
printf("minus of two number is %d\n",minus);
printf("multiplication of two num is %d\n",multi);
printf("divison of two number is %d\n",div);
printf("remainder is %d\n",remainder);
printf("after increasing the values is %d\n",increase);
printf("after decreasing the values is %d\n",decrease);
getch();
}
