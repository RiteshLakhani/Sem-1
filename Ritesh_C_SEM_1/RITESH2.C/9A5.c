//find factors of the given number.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a;
	
	printf("\n Enter no: ");
	scanf("%d",&a);
	
	i=1;
	
	while(i<=a)
	{
		if(a%i==0)
		{
			printf("\n %d",i);
		}
		i=i+1;
	}
	getch();
}
