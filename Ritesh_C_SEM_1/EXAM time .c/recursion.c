#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
	int n,f;
	
	printf("\n Enter number: ");
	scanf("%d",&n);
	
	f=fact(n);
	printf("\n Factorail=%d",f);
	
	getch();
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
