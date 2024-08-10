#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n,r,sum=0,finaln;
	double pow=0;
	
	printf("\n Enter No: ");
	scanf("%d",&n);
	
	finaln=n;
	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		i++;
	}
	
	n=finaln;
	while(n>0)
	{
		r=n%10;
		pow=pow(r,i);
		sum=sum+pow;
		n=n%10;
	}
	
	if(finaln==sum)
	{
		printf("\n Armstrong");
	}
	else
	{
		printf("\n Not Armstrong");
	}
	
	getch();
}
