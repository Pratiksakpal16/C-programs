#include<stdio.h>
#include<conio.h>
void main()
{
float s;
char name[15];
printf("\nenter name:");
scanf("%c",&name);
printf("\n Enter the marks in percentage:");
scanf("%f",&s);
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

