//find out sum of first and last digit of a given no.

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,firstdigit,lastdigit,rem;
	
	printf("\n Enter number to find sum of first and last digit = ");
	scanf("%d",&n);
	
	lastdigit=n%10;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
	}
	sum=rem+lastdigit;
	printf("\n Number of first digit and last digit=%d",sum);
	
	getch();
}
