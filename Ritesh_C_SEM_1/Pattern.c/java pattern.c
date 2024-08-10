#include<stdio.h>
#include<stdio.h>
void main()
{
	int i,j,k,l;
	k=5;
	for(l=1;l<=9;l++)
	{
	printf("%d",k);
	}
	for(j=1;j<=9;j++)
	{	
		printf("%d ",k);
		for(i=3;i<=7;i++)
		{
			printf("");
		}
		printf("%d ",k);
		printf("\n");
	}		
	
}
