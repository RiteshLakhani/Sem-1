#include<stdio.h>
#include<conio.h>
int intrest(int ,int ,int );
int main()
{
	int p,n,r,ans;
	
	ans=intrest(p,r,n);
	printf("\n Ans=%d",ans);
	
	getch();
}

int intrest(int p,int r,int n)
{
	int si;
	
	printf("\n Enter Principal: ");
	scanf("%d",&p);
	
	printf("\n Enter rate of intrest: ");
	scanf("%d",&r);
	
	printf("\n Enter time period: ");
	scanf("%d",&n);
	
	si=p*r*n/100;
	
	return si;	
	
}
