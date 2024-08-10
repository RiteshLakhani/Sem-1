//Check whether the given number is perfact or not.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n,sum=0;
	
	printf("\n Enter a number: ");
	scanf("%d",&n);
	
	while(i<n)
	{
		if(n%i==0)
		{
			printf(" %d",i);
			sum=sum+i;
		}
		i=i+1;
	}
	printf("=%d",sum);
	
	if(sum==n)
	{
		printf("\n %d is a perfact Number",n);
	}
	else
	{
		printf("\n %d is not a perfact number",n);
	}
	getch();
}
