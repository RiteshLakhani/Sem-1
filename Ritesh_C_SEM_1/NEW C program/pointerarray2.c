#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,*p[5];
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter value: ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		p[i]=&a[i];
		
	}
	
		for(i=0;i<5;i++)
	{
		printf("\n Value:%d",a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n Address:%d",*p[i]);
	}
	
}
