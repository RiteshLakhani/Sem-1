//swap value of two numbers using pointer.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,*p,*q;
	
	printf("\n Enter value of a and b: ");
	scanf("\n %d %d",&a,&b);
	
	p=&a;
	q=&b;
	
	printf("\n  Address value of A:%d",p);
	printf("\n  Address value of b:%d",q);

	c=*p;
	*p=*q;
	*q=c;
	
	printf("\n swaping value of A:%d",*p);
	printf("\n swaping value of B:%d",*q);	
	
	getch();
}
