#include<stdio.h>
int  main()
{
	int a[100],b[100],n,i;
	
	printf("\n Enter Length of elemnet: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter Array: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		printf("\n Copy Array:%d",b[i]);
	}
	return 0;

}
