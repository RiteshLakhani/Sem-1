//Print sum of series 1-2+3-4+5-6+7...n.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,n,sum=0;
	
	printf("\n Enter no: ");
	scanf("%d",&a);
	
	i=1;
	while(i<=a)
	{
		if(i%2!=0)
		{
			sum=sum+i;
		}
		else
		{
			sum=sum-i;
		}
	i=i+1;
	}
	printf("\n The sum is %d",sum);
	
	getch();
}
