#include<stdio.h>
#include<conio.h>
int addnum(int);

void main()
{
	int n,ans;
	
	printf("\n Enter no: ");
	scanf("%d",&n);
	
	ans=addnum(n);
	
	printf("\n Ans=%d",ans);
}

int addnum(int n)
{
	int i,sum=0;
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}
