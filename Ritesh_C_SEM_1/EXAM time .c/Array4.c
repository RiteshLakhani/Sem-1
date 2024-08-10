#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,sum=0,avg=0,max=0,min=0;
	
	printf("\n Enter No: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter no: ");
		scanf("%d",&a[i]);
	}
	
		max=a[0];
		min=a[0];
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		
		if(a[i]>0)
		{
			max=a[i];
		}
		else
		{
			min=a[i];
		}
		avg=sum/a[i];
	}
	printf("\n Sum=%d",sum);
	printf("\n Avg=%d",avg);
	printf("\n Max=%d",max);
	printf("\n Min=%d",min);
	
	getch();
}
