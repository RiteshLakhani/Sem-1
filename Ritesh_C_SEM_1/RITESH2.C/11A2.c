//Print sum of 1 to n number.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	
	printf("\n Enter no: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\n %d",i);
		sum=sum+i;
	}
	printf("\n Sum=%d",sum);
	getch();
}
