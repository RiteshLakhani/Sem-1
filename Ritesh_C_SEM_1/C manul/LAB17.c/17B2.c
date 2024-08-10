//swap two arrays using pointer.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],b[100],i,n,c,*p[100],*q[100];
	
	printf("\n Enter no of element of array: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter value of array A: ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter value of array B: ");
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		p[i]=&a[i];
		q[i]=&b[i];
		c=*p[i];
		*p[i]=*q[i];
		*q[i]=c;
				
	}
	for(i=0;i<n;i++)
	{
		printf("\n After swaaping value of Array A :%d",*p[i]);
	
	}
	for(i=0;i<n;i++)
	{
		printf("\n After swaaping value of Array B :%d",*q[i]);
	}
	getch();
}
