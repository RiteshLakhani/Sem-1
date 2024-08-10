//calculate the square of integers 1 through 10.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,square;
	
	i=1;
	while(i<=10)
	{
		square=i*i;
		printf("\n %d is no and %d is square",i,square);
		i=i+1;	
	}
	getch();
}
