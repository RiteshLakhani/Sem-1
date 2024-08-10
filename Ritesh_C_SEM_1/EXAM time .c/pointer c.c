#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*p;
	
	printf("\n Eneter value A: ");
	scanf("%d",&a);
	
	p=&a;
	printf("\n Addres of A is %d",p);
	getch();
}
