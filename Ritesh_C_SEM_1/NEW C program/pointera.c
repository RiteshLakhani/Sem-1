#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,*p;
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter value:");
		scanf("%d",&a[i]);
	}
	
	
	for(i=0;i<5;i++)
	{
		printf("\n value=%d",a[i]);
	}
	
	p=&a[0];
	
	for(i=0;i<5;i++)
	{
		printf("\n %d",*p);
		p++;
	}
	
	getch();
}
