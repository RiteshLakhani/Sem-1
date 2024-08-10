#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	
	printf("Enter A: ");
	scanf("%d",&a);
	
	printf("Enter B: ");
	scanf("%d",&b);
	
	printf("Enter C: ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(b>c)
		{
			printf("B is grater");
		}
		else
		{
			printf("C is grater");
		}
	}
	else
	{
		if(a>c)
		{
			printf("A is grater");
		}
		else
		{
			printf("C is grater");
		}
	}
	
	getch();
}
