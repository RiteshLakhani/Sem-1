#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	
	printf("\n Enter int value->");
	scanf("%d",&i);
	
	j=i&1;
	if(j==1)
	{
		printf("\n odd");
	}
	else
	{
		printf("\n even");
	}
	getch();
}
