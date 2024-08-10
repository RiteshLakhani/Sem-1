#include<stdio.h>
#include<conio.h>
int fact(int);

void main()
{
	int i,n,ans;
	
	printf("\n Enter a number: ");
	scanf("%d",&n);
	
	ans=fact(n);
	printf("\n Ans of Factorial=%d",ans);
	
	getch();
}

int fact(int n)
{
	int i,fact=1;
	
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}	
	
	return fact;
}







