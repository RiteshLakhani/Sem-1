//Stor n elements in array and printf the elements using pointer.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,*p[100],n;
	
	printf("\n Enter the number of element: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter int value-> ");
		scanf("%d",&a[i]);
		p[i]=&a[i];
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n values=%d",*p[i]);
	}
	getch();
}
