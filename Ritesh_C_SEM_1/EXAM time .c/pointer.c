#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*p,**ptr;
	
	printf("\n 	Enter No: ");
	scanf("%d",&a);
	
	p=&a;
	ptr=&p;
	
	printf("\n A=%d",a);
	printf("\n P=%d",*p);
	printf("\n PTR=%d",**ptr);
	
	getch();
}
