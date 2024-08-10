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
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=a[j][i];
		}
		printf("\n");
	}
	
	printf("\n\n ");
	for(i=0;i<3;i++)
	{
		sum=sum+a[i][i];
		{
			//sum=sum+a[i][j]*b[i][j];
			//c[i][j]=sum;
		}
		
	}
	printf("%d",sum);
	
	getch();
	
}
