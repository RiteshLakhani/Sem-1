//13B1. 1
//      2  3
//      4  5  6
//      7  8  9  10
//      11 12 13 14 15

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			n=n+1;
			printf(" %d ",n);
		}
		printf("\n");
	}
	getch();
}
