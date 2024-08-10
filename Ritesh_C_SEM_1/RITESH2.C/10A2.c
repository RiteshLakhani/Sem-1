//Find the sum and avrage of different numbers which are accepeted by user as many as
//user wants.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a,sum=0,avg=0;
	
	printf("\n Enter no: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter no of sum: ");
		scanf("%d",&a);
		
		sum=sum+a;
		avg=sum/n;
	}
	
	printf("\n %d is sum of all no",sum);
	printf("\n %d is avg of all sum",avg);
	
	getch();
}

