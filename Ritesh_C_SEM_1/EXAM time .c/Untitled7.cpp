#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	int *p;
	
	printf("\n Enter value of N: ");
	scanf("%d",&n);
	
	p=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter Number: ");
		scanf("%d",&p[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n Square of %d=%d",p[i],p[i]*p[i]);
	}
	
	return 0;
}
