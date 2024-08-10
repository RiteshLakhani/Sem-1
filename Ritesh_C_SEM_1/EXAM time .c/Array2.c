#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,pos=0,neg=0;
	
	for(i=0;i<10;i++)
	{
		printf("\n Enter no: ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(a[i]>0)
		{
			pos=pos+1;
		}
		else
		{
			neg=neg+1;
		}
	}
	
	printf("\n Total Postive No:%d",pos);
	printf("\n Total Negative No:%d",neg);
	
	getch();
}
