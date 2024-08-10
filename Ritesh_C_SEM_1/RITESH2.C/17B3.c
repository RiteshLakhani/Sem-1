//Add two matrix using pointer.

#include<stdio.h>
#include<conio.h>
void main()
{
	int A[2][2]={1,1,2,2};
	int B[2][2]={1,2,3,4};
	int *ptrA,*ptrB,i,j,sum=0;
	
	printf("\n Matrix A :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	printf("\n Matrix B :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
	printf("\n Sum of Matrix A and B :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			ptrA=&A[i][j];
			ptrB=&B[i][j];
			sum=*ptrA + *ptrB;
			printf("%d",sum);
		}
		printf("\n");
	}
	getch();
}
