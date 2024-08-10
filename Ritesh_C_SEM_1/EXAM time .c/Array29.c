#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],i,j,c[3],dig=0,sum=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter element: ");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
			dig=a[i][i];
			printf("\n  digonal elements are %d",dig);
	}
		
	
	for(i=0;i<3;i++)
	{
		//for(j=0;j<3;j++)
		//{
			sum=sum+a[i][i];
			
		//}
	}
	printf("\n Diagonal elements sum is %d",sum);	
	getch();
}
