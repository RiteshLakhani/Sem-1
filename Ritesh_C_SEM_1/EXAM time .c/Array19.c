#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter Array Element: ");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter Array Element: ");
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{			
			sum=sum+a[i][k]*b[k][j];
			c[i][j]=sum;
			}
			//printf("%d",sum);
		}
		printf("\n ");
	}
	
	
	printf("\n\n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			//sum=sum+a[i][j]*b[i][j];
			//c[i][j]=sum;
			printf("%d",c[i][j]);
		}
		printf("\n ");
	}
	
	getch();
	
}
