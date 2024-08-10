#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,f,e;
	
	printf("\n Enter seconds: ");
	scanf("%d",&a);
	
	b=a/3600;
	c=a%3600;
	e=c/60;
	f=c%60;
	
	printf("%2d:",b);
	printf("%2d:",e);
	printf("%2d",f);
	
	getch();
}
