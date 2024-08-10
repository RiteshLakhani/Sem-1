#include<stdio.h>
#include<conio.h>
void main()
{
	int nod,year,week,days;
	
	printf("\n Enter no of days: ");
	scanf("%d",&nod);
	
	year=nod/365;
	week=(nod%365)/7;
	days=(nod%365)/7;
	
	printf("\n %2d",year);
	printf("\n %2d",week);
	printf("\n %2d",days);
	
	getch();
}
