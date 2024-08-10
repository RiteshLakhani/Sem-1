//printf digits of given number.

#include<stdio.h>
#include<conio.h>
void main()
{
	int Number,count=0;
	
	printf("\n Enter any Number: ");
	scanf("%d",&Number);
	
	while(Number>0)
	{
		Number=Number/10;
		count=count+1;
	}
	printf("\n No of digits in a given number=%d",count);
	
	getch();
	
}
