#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;

	printf("Enter int value of a: ");
	scanf("%d",&a);
	
	printf("Enter int value of b: ");
	scanf("%d",&b);
	
	printf("Enter int value of c: ");
	scanf("%d",&c);
	
	a>b?(a>c?printf("\n A is max"):printf("\n C is max")):(b>c)?printf("\n B is maximum"):printf("\n C is maximum");
	
	getch();
	
}
