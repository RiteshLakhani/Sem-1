#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,largest;
	
	printf("\n Enter Length of Array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter lenght: ");
		scanf("%d",&a[i]);
	}
	
		largest=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			largest=a[i];
		}
	}
	printf("\n Lagest Element:%d",largest);
}
