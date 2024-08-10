#include<stdio.h>
#include<conio.h>
void main()
{
	int height,base,area;
	
	printf("\n Enter height of the triangle: ");
	scanf("%d",&height);
	
	printf("\n Enter base of the triangel: ");
	scanf("%d",&base);
	
	area=((height*base)/2);
	printf("\n area=%d",area);
	
	getch();
}
