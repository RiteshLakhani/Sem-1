#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,j,*p[100],temp;
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter No: ");
		scanf("%d",&a[i]);
		
		p[i]=&a[i];
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=*p[i];
				*p[i]=*p[j];
				*p[j]=temp;	
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\n Assencding order:%d",*p[i]);
	}
}
