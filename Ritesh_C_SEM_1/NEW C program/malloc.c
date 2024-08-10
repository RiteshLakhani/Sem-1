#include<stdio.h>
#include<conio.h>
void main()
{
	int *p;
	
	p=(int *)malloc(sizeof(int));
	
	*p=10;
	
	printf("\n %d",*p);
	
	free(p);
	
//	printf("\n %d",*p);	
	
	getch();
}
