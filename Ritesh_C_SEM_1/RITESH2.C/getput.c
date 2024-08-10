#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	
	printf("\n Enter A:");
	scanf("%d",&a);
	
	printf("\n Enter B: ");
	scanf("%d",&b);
	
	printf("\n Enter C: ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\n A is largest");
		}
		else
		{
			printf("\n C is largest");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n B is greater");
		}
		else
		{
			printf("\n C is grater");
		}
	}
	
	getch();
	
}

