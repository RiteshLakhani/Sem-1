//Perform Addtion of two matrix.

#include<stdio.h>
#include<conio.h>
void main()
{

	int a[2][2],b[2][2],i,j,sum;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n Enter matrix A: ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n Enter matrix B: ");
			scanf("%d",&b[i][j]);
		}
	}
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n ");
	}
	
	
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
			printf("%d ",b[i][j]);
			}
			printf("\n ");
		}
	
	
	for(i=0;i<2;i++)
	{
			for(j=0;j<2;j++)
			{
			sum=a[i][j]+b[i][j];
			printf(" %d",sum);
			}
			printf("\n ");
	}
	getch();
}
