#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	
	for(i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==1)
			{
				printf("\n %d",j++);
			}
			else
			{
				n=n+1;
				printf("\n %c",n);
			}
		}
	}
}
