//sort an array using pointer.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,temp=0,*p[5];
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter no: ");
		scanf("%d",&a[i]);
		
		p[i]=&a[i];
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=*p[i];
				*p[i]=*p[j];
				*p[j]=temp;
				
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n %d",*p[i]);
	}
	getch();
}
