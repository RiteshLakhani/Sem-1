#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,flag=0;
	
	printf("\n Enter a number: ");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		flag=1;
		break;
		}
	}
	
	if(flag==0)
	{
		printf("\n %d  is prime no",n);	
	}
	else
	{
		printf("\n %d is not prime no",n);
	}
	
	getch();
}
