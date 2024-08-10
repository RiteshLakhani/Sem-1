#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,sum;
	
	printf("\n Enter Length of element: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter Array of Element: ");
		scanf("%d",&a[i])
	}
	
	sum=a[1]+a[n-2];
	printf("\n Sum=%d",sum);
}
