#include<stdio.h>
#include<conio.h>
int fibonacci(int );
void main()
{
	int n,m=0,i;
	
	printf("\n Enter Total Terms: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
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
		return (fibonacci(n-1)+fibonacci(n-2));
	}
}
