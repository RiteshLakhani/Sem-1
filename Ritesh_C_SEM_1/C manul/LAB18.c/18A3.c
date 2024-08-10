//count simple intrest using function.

#include<stdio.h>
#include<conio.h>
int interest(int p,int r,int n);
int main()
{
	int p,r,n,ans;
	ans=interest(p,r,n);
	printf("%d",ans);
	return 0;
}
int interest(int p,int r,int n)
{
	printf("\n Enter principl: ");
	scanf("%d",&p);
	
	printf("\n Enter rate of interest: ");
	scanf("%d",&r);
	
	printf("\n Enter time period: ");
	scanf("%d",&n);
	
	return (p*r*n)/100;
}

