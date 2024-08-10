//3. * * * * *
//    * * * *
//     * * *
//      * *
//       *

#include<stdio.h>
#include<conio.h>
void main()
{
	int n=5,i,j,k;
	
	for(j=n;j<=1;j--)
	{
		for(i=1;i=n-j;i++)
		{
		printf(" ");
		}
	for(k=0;k<=j;k++)
	{
		printf("*");
	}
	printf("\n");
	}
	getch();
}
