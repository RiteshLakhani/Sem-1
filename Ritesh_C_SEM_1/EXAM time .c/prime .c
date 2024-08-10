#include<stdio.h>
#include<conio.h>
int checkprime(int);

void main()
{
	int n,prime;
	
	printf("\n Enter No: ");
	scanf("%d",&n);
	
	prime=checkprime(n);
	
	if(prime==1)
	{
		printf(" 1");
	}
	else
	{
		printf("\n 0");
	}
	
	getch();
	
}

int checkprime(int n)
{
	int i,flag=1;
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
	
}








