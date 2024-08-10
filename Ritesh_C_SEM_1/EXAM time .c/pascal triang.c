#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,c=1,rows;
	
	printf("\n Enter N: ");
	scanf("%d",&rows);
	
	for(i=0;i<=rows;i++)
	{
		for(k=0;k<=rows-i;k++)
		{
			printf(" ");
		}
		
		for(j=0;j<=i;j++)
		{
			if(j==0 || i==0)
			{
				c=1;
			}
			else
			{
				c=c*(i-j+1)/j;
			}
		printf("%d ",c);
		}
		printf("\n\n ");
	}
	getch();
}
