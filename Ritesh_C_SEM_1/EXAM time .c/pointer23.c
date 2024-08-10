#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,*p[100],n,sum=0;
	
	printf("\n Enter How many no u want to add: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter int value-> ");
		scanf("%d",&a[i]);
		p[i]=&a[i];
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+*p[i];
	}
	printf("\n sum=%d",sum);

}
