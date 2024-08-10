#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sum=0,sum1=0,n;
	
	printf("\n Enter Value of N: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=0;j<=i;j++)
		{
			sum=sum+j;
		}
		sum1=sum1+sum;
	}
	printf("\n Sum=%d",sum1);
}
