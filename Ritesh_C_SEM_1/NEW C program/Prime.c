#include<stdio.h>
int prime(int );
main()
{
	int n,b;
	
	printf("\n Enter Value-> ");
	scanf("%d",&n);
	
	b=prime(n);
	
	if(b==1)
	{
		printf("\n %d  is prime no",n);	
	}
	else
	{
		printf("\n %d is not prime no",n);
	}
	
	printf("\n b=%d",b);
	
	getch();
}

int prime(int x)
{
	int i,flag=1;
	
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
		flag=0;
		break;
		}
	}
	return flag;
}
