//check whether the given number is Armstromg or not.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,r,sum=0,power=0,final;
	
	printf("\n Enter no: ");
	scanf("%d",&n);
	
	final=n;
	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		i=i+1;
	}
	
	n=final;
	while(n>0)
	{
		r=n%10;
		power=pow(r,i);
		sum=sum+pow;
		n=n/10;
	}
	
	if(final==sum)
	{
		printf("\n Armstrong ");
	}
	else
	{
		printf("\n Not Armstrong");
	}
	getch();
}

