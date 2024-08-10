#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,pos=0,neg=0,zero=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter Array Element= ");
			scanf("%d",&a[i][j]);
			
			if(a[i][j]>0)
			{
				pos=pos+1;
			}
			else if(a[i][j]==0)
			{
				zero=zero+1;
			}
			else
			{
				neg=neg+1;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
	printf("\n ");
	}
	
	printf("\n Postive number=%d",pos);
	printf("\n Negative number=%d",neg);
	printf("\n Zero number=%d",zero);
	
}
