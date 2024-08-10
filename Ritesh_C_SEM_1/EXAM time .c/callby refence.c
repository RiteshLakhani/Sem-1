#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	printf("\n Enter A: ");
	scanf("%d",&a);
	
	printf("\n Enter B: ");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	getch();
}
void swap(int *a,int *b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
	
	printf("A=%d",*a);
	printf("B=%d",*b);
}
