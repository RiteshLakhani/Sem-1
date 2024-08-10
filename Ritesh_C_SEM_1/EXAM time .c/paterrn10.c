#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,fact=1;
	float sum=0;
	
	printf("\n N: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=i;j>0;j--)
		{
			fact=fact*j;
		}
	sum=sum+(1.0/fact);
	}
	printf("\n Sum=%f",sum);
	getch();
}
