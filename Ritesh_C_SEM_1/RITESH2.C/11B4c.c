//swap first and last digit of a number.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,r,n,c;
	
	printf("\n Enter no: ");
	scanf("%d",&n);
	
	for(i=1;i=n!=0;i++)
	{
		r=r*10;
		r=r+n%10;
		n=n/10;
	}	
		printf("\n %d",r);
	for(i=0;i<=n;i++)
	{
		c=n;
		n=r;
		r=c;
	}
	printf("\n After swaping %d and %d",c,r);
}
