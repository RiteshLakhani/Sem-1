#include<stdio.h>
#include<conio.h>
int BtoD(int b,int c,int t);
void main()
{
	int bin,dec;
	
	printf("\n Enter Binary No: ");
	scanf("%d",&bin);
	
	dec=BtoD(bin,1,0);
	printf("\n %d is Decimal no of binary ");
	
	getch();
}

int BtoD(int b,int c,int t)
{
	if(b>0)
	{
		t=t+(b%10)*c;
		BtoD(b/10,c*2,t);
	}
	else
	{
		return t;
	}
}

