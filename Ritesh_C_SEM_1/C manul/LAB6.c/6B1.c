#include<stdio.h>
#include<conio.h>
void main()
{
	int n, sum, sur, bill ;
	
	printf("\n Enter the unit: ");
	scanf("%d",&n);
	
	if(n>=50)
	{
		sum=n*0.50;
	}
	else if(n>50 && n<=150)
	{
		sum= 50*0.50+ (n-50)*0.75;
	}
	else if(n>150 && n<=250)
	{
		sum= 50*0.50 + 0.75*100 + (n-150)*1.20;
	}
	else if(n>=250)
	{
		sum=50*0.50 + 0.75*100 + 1.20*100 + (n-250)*1.50;
	}
	
	sur= 20*sum/100;
	
	bill=sum + sur;
	
	printf("\n Surcharge=%d",sur);
	printf("\n bill=%d",bill);
	
	getch();
}
