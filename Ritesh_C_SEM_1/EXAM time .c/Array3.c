#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i;
	
	printf("\n Enter No: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter no: ");
		scanf("%d",&a[i]);
	}
	
	for(i=n-1;i>=0;i--)
	{
		printf("\n %d",a[i]);
	}
	
	getch();
}
