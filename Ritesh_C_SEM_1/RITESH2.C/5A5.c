#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	
	printf("\n Enter value of a: ");
	scanf("%d",&a);
	
	printf("\n Enter value of b: ");
	scanf("%d",&b);
	
	printf("\n Enter value of c: ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\n a is bigger");
		}
		else
		{
			printf("\n c is bigger");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n b is bigger");
		}
		else
		{
			printf("\n c is bigger");
		}
	}
	getch();
}
