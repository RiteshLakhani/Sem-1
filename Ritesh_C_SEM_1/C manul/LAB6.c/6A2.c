#include<stdio.h>
#include<conio.h>
void main()
{
	int basic,gross,hra,da;
	
	printf("\n Enter basic salary-> ");
	scanf("%d",&basic);
	
	if(basic>=10000)
	{
		hra=0.20*basic;
		da=0.80*basic;	
	}
	else if(basic>=20000)
	{
		hra=0.25*basic;
		da=0.90*basic;
	}
	else if(basic>=30000)
	{
		hra=0.30*basic;
		da=0.95*basic;
	}
	
	gross=basic+hra+da;
	printf("\n GROSS SALARY=%d",gross);
	
	getch();
	
	getch();
}
