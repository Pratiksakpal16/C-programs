#include<stdio.h>
#include<conio.h>
#include<string.h>
struct books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};
int main()
{
	struct books book1;
	struct books book2;
	
	strcpy(book1.title,"c programming");
	strcpy(book1.author,"nuha ali");
	strcpy(book1.subject,"c programming tutorial");
	book1.book_id=6495407;
	
	strcpy(book2.title,"telecom billing");
	strcpy(book2.author,"zara ali");
	strcpy(book2.subject,"telecom billing tutorial");
	book2.book_id=6495700;
	
	printf("book 1 title:%s",book1.title);
	printf("\nbook 1 author:%s",book1.author);
	printf("\nbook 1 subject:%s",book1.subject);
	printf("\n book 1 book_id:%d",book1.book_id);
	
	printf("book 2 title:%s",book2.title);
	printf("\nbook 2 author:%s",book2.author);
	printf("\nbook 2 subject:%s",book2.subject);
	printf("\n book 2 book_id:%d",book2.book_id);
	
	getch();
}

