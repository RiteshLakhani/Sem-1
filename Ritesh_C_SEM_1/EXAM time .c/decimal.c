#include<stdio.h>
#include<conio.h>
int Dtob(int d);
void main()
{
	int b,d;
	
	printf("\n Enter Decimal No: ");
	scanf("%d",&d);
	
	b=Dtob(d);
	printf("\n Binary=%d",b);
	
	getch();
}
int Dtob(int d)
{
	if(d==0)
	{
		return 0;
	}
	else
	{
		return d % 2 + 10 * Dtob ( d/2);
	}
}
