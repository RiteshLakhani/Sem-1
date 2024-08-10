//Find whether the given number is prime or not.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,flag;
	
	printf("\n Enter int value-> ");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			printf("\n %d is not prime number",n);
			break;
		}
	}
	if(flag==0)
	{
		printf("\n %d is prime no",n);
	}

	getch();
	
}
