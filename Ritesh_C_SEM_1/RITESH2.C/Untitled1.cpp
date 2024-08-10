#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a,n,odd=0,avg=0,count=0;
	
	printf("\n Enter no: ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		printf("\n Enter No: ");
		scanf("%d",&n);
		
		if(n%2!=0)
		{
			odd=odd+n;
			
			count=count+1;
			avg=odd/count;
		}
	
	}
		printf("\n Odd=%d",odd);
		printf("\n Avg=%d",avg);
	
	getch();
	
}
