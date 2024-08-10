#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	
//	printf("\ Enter number-> ");
//	scanf("%d",&n);
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			n=n+1;
			printf(" %d ",n);
		}
			printf(" \n ");	
	}
	getch();
}
