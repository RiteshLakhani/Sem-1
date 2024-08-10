//find whether the given number is prime or not using flag.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i=2,flag=0,n;
	
	printf("\n Enter a number: ");
	scanf("%d",&n);
	
	while(i<=n/2)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	
	if(flag==0)
	{
		printf("\n %d is a prime number",n);
	}
	else
	{
		printf("\n %d is a not prime number",n);
	}
	getch();
}
