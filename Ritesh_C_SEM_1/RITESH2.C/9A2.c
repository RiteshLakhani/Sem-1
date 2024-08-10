//print multiplication table of a given number.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,n;
	
	printf("\n Enter a number: ");
	scanf("%d",&n);
	
	i=1;
	while(i<=10)
	{
		a=i*n;
		printf("\n %d is multiply by %d is equal to %d",n,i,a);
		i=i+1;
	}
	getch();	
}
