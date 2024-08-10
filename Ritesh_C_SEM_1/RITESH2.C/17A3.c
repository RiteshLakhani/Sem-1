//calculate sum of two no using pointer.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,*p,*q,sum;
	
	printf("\n Enter value of a and b: ");
	scanf("%d %d",&a,&b);
	
	p=&a;
	q=&b;
	
	printf("\n Address of A=%d",p);
	printf("\n Address of B=%d",q);
	
	//sum=a+b;
	printf("\n Sum=%d",*p+*q);
	
	getch();
}
