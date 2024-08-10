//Print fibonacci series.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,t1=0,t2=1,t3=t1+t2;
	
	printf("\n Enter no of term: ");
	scanf("%d",&n);
	
	printf("\n %d %d",t1,t2);
	for(i=0;i<=n;i++)
	{
		printf(" %d ",t3);
		t1=t2;
		t2=t3;
		t3=t1+t2;
	}
	getch();
}
