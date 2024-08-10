//print area of circle.

#include<stdio.h>
#include<conio.h>
void main()
{
	float r,area,pie=3.14;
	
	printf("\n Enter value of r-> ");
	scanf("%f",&r);
	
	area=pie*r*r;
	printf("\n Area=%f",area);
	
	getch();
}
