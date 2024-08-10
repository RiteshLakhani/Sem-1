#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	
	printf("\n Enter int value->");
	scanf("%d",&x);
	
	//To find the last number
	y=x%10;
	
	if(y%2==0)
	{
		printf("\n %d is even",y);
	}
	else
	{
		printf("\n %d is odd",y);
	}
	getch();
}
