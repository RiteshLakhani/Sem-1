#include<stdio.h>
#include<conio.h>
void fibbo(int );
int main()
{
	int range;
	
	printf("\n Enter Rang of Fibbonacci: ");
	scanf("%d",&range);
	
	fibbo(range);
	
	getch();
}

void fibbo(int range)
{
	int a=0,b=1,c,sum=0;
	
	while(a<=range)
	{
		printf(" %d ",a);
		sum=sum+a;
		c=a+b;
		a=b;
		b=c;
	}
	//sum=sum+c;
	printf("\n Sum=%d",sum);
}
