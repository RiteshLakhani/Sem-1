//print 1 to 10 then modify program print 1 to n.(for loop).

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	
	printf("\n Enter no: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\n %d",i);
	}
	getch();
}
