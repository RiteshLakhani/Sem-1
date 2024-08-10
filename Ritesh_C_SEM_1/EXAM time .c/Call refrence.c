#include<stdio.h>
#include<conio.h>
void fun(int *x,int *y);
void main()
{
	int a,b;
	
	printf("\n Enter A and B: ");
	scanf("%d %d",&a,&b);
	
	fun(&a,&b);
	
	printf("\n After calling %d %d",a,b);
	
	getch();
}
void fun(int *x,int *y)
{
	*x=11;
	*y=12;
}
