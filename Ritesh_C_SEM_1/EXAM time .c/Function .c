#include<stdio.h>
#include<conio.h>
int  max(int ,int );
void main()
{
	int a,b,ans=0;
	
	printf("\n Enter A: ");
	scanf("%d",&a);
	
	printf("\n Enter B: ");
	scanf("%d",&b);
	
	max(a,b);
	
	ans=max(a,b);
	printf("\n MAX IS %d",ans);
	
	getch();
}

int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
