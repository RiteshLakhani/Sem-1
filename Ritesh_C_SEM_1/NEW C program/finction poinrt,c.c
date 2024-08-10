#include<stdio.h>
#include<conio.h>
void val(int *);
main()
{
	int  a,*p;
	
	printf("\n Enter Value-> ");
	scanf("%d",&a);
	
	
	printf("\n A=%d",a);
	
	val(&a);
	
	printf("\n A=%d",a);

	
	getch();
	
}

void   val(int *q)
{ 
	
	*q=*q+5;
	printf("\n A=%d",*q);
}
