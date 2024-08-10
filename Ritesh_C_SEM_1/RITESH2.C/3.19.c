#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	
	printf("\n Enter A: ");
	scanf("%d",&a);
	
	printf("\n Enter B: ");
	scanf("%d",&b);
	
	printf("\n Enter C: ");
	scanf("%d",&c);
	
	a>b?(a>c?printf("\n A is max"):printf("\n C is max")):(b>c?printf("\n B is max"):printf("\n C is max"));
	
	getch();
	
}
