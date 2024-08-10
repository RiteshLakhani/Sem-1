#include<stdio.h>
#include<conio.h>
void main()
{
	int sum=0,num[100],i,n,count,avg;
	
	printf("\n Enter int value->");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter int value->");
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+num[i];
	//	count=count+1;
		avg=avg/sum;
	}
	printf("\n %d",sum);
	printf("\n %d",avg);
	getch();	
}
