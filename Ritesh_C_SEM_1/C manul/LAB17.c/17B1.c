//Copy one array to another using pointer.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],b[100],*p,n,i;
	
	printf("\n Enter no of elements: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter array value-> ");
		scanf("%d",&a[i]);
		
		p=&a[i];
		b[i]=*p;
		
	}
	for(i=0;i<n;i++)
	{
		printf("\n  array value=%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n Copied array value=%d",b[i]);
	}
	getch();

}
