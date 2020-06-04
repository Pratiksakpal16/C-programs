#include<stdio.h>
#include<conio.h>
int main()
{
int sub1,sub2,sub3;
float s;
printf("Enter three subjects marks:\n ");
scanf("%d%d%d", &sub1, &sub2, &sub3);
s=(sub1+sub2+sub3)/3;
printf("Percentage=%f\n",s);
if(s>=75)
{
printf("\n You have secured distinction");
}
else if(s<75 && s>=60)
{
printf("\n You have secured first class");
}
else if(s<60 && s>=45)
{
printf("\n You have secured second class");
}
else if(s<45 && s>=35)
{
printf("\n You have secured pass class");
}
else
{
printf("\n You have failed");
}
return 0;
}
