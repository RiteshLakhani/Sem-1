#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=5,*p,**q,sum;
	
	
	p=&a;
	q=&p;
	
	//printf("\n a=%d",a);
	//printf("\n a=%u",&a);
	//printf("\n p=%u",p);
	//printf("\n p=%d",&p);
	printf("\n a=%d",*p);
	printf("\n a=%d",**q);
	
	//sum=*p+*q;
	//printf("\n Sum=%d",sum);
	
	getch();
	
}
