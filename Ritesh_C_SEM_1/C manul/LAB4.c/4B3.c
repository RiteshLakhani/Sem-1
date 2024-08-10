#include<stdio.h>
#include<conio.h>
void main()
{
	float far,cel;
	
	printf("\n Enter fahrenhit : ");
	scanf("%f",&far);
	
	cel=(((far-32)*5)/9);
	printf("celcuis=%f",cel);
	
	getch();
}
