#include<stdio.h>
#include<conio.h>
void main()
{
	int a,h,m,s;
	
	printf("\n Enter seconds: ");
	scanf("%d",&a);
	
	h=(a/3600);
	m=(a-(3600*h))/60;
	s=(a-(3600*h))-(m*60);
	
	printf("\n %2d",h);
	printf(" :%2d",m);
	printf(" :%2d",s);
	
	getch();
}
