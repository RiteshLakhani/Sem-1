#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,n,t;
	int *p;
	
	printf("\n Enter Value of N-> ");
	scanf("%d",&n);
	
	p=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter values-> ");
		scanf("%d",&p[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[i]>p[j])
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d",p[i]);
	}
	free(p);
}
