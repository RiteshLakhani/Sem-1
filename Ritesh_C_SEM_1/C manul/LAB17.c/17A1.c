#include<stdio.h>
#include<conio.h>
void main()
{
	int *p,a;

	p=&a;
	
	printf ("\n Enter Value of a==>");
	scanf("%d",&a);
	
	
	printf("\n Value of a is :%d",a);
	
	printf("\n Address of a is : %d",*p);
	getch();
}
