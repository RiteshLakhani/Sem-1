#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	
	printf("\n Enter int value->");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("\n sum=%d",sum);
	getch();
}
