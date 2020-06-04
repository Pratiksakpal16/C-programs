#include<stdio.h>
#include<conio.h>
FILE *fptr;
int main()
{
	int fno,sno,*ptr,*qtr,sum;
	fptr = fopen("E:\\emp1.txt", "w+");/*  open for writing */  
    if (fptr == NULL)  
    {  
        printf("File does not exists \n");  
        return;
	}
	printf("Input the first number:");
	scanf("%d",&fno);
	fprintf(fptr,"fno=%d\n",fno);
	printf("Input the second number:");
	scanf("%d",&sno);
	fprintf(fptr,"sno=%d",sno);
	ptr=&fno;
	qtr=&sno;
	sum=*ptr + *qtr;
	fprintf(fptr,"The sum of the entered numbers is:%d\n\n",sum);
	fclose(fptr);
}

