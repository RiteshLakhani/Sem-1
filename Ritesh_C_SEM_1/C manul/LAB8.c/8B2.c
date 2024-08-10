#include<stdio.h>
#include<conio.h>
void main()
{
	int i=100;
	
	while(i<=200)
	{	
		if(i%7==0 && i%5!=0)
		{
			printf("\n %d",i);
		}
		i=i+1;
	}
	getch();
}
