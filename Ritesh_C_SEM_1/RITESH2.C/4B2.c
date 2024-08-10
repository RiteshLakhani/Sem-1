#include<stdio.h>
#include<conio.h>
void main()
{
	int pri,roi,tp,si;
	
	printf("\n Enter principal ");
	scanf("%d",&pri);
	
	printf("\n Enter rate of intreast: ");
	scanf("%d",&roi);
	
	printf("\n enter time peroid: ");
	scanf("%d",&tp);
	
	si=((pri*roi*tp)/100);
	printf("\n simple intreast=%d",si);
	
	getch();
}
