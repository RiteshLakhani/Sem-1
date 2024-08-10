#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],i,j=0;
	
	for(i=0;i<20;i++)
	{
			printf("\n Enter roll and marks:");	
			scanf("%d",&a[i][j]);
			scanf("%d",&a[i][j+1]);
	}
	
	printf("\nRollno\t  Marks\n");
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			printf("%d\t ",a[i][j]);
		}
		printf("\n");
	}
}
