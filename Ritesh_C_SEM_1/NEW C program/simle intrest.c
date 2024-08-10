#include<stdio.h>
int si(int p,int r,int n);

main()
{
	int p,r,n,b;
	
	printf("\n Enter Principal: ");
	scanf("%d",&p);
	
	printf("\n Enter Rate of Intrest: ");
	scanf("%d",&r);
	
	printf("\n Enter Number of Yers: ");
	scanf("%d",&n);
	
	b=si(p,r,n);
	
		printf("\n Simple Intrest:%d",b);
	getch();	
}

int  si(int p,int r,int n)
{
	int SI;
	
	SI=p*r*n/100;
	return SI;

	
}
