#include<stdio.h>
#include<conio.h>
void swap(int ,int );

void main()
{
	int a,b,ans;
	
	printf("\n Enter A: ");
	scanf("%d",&a);
	
	printf("\n Enter B: ");
	scanf("%d",&b);
	
	swap(a,b);
	
	getch();
}

void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n A=%d",a);
	printf("\n B=%d",b);
}
