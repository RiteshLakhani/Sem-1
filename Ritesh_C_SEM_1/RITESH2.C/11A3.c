//print multiplication table of a given number.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,mul=0;
	
	printf("\n Enter multiplication table no: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		mul=n*i;
		printf("\n %d multiply by %d =%d",n,i,mul);
	}
	getch();
}
