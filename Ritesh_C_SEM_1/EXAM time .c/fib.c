#include<stdio.h>
#include<conio.h>

void  main()
{
	int n,m=0,i;
	
	printf("\n Enter Term :  ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		printf(" %d ",fibonacci(m));
		m++;
	}
}
int fibonacci(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
