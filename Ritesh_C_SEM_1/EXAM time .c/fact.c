#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
	int n,f;
	
	printf("\n Enter No: ");
	scanf("%d",&n);
	
	f=fact(n);
	printf("\n Factorial=%d",f);
	
	getch();
}

int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
