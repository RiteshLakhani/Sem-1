#include<stdio.h>
#include<conio.h>

void main()
{
	int dec,bin;
	
	printf("\n Enter Decimal Number: ");
	scanf("%d",&dec);
	
	bin=dTob(dec);
	printf("\n %d is binaray no of decimal",b);
	
	getch();
}
int dTob(int dec)
{
	if(dec==0)
	{
		return 0;
	}
	else
	{
		return dec % 2 + 10 * dTob(dec/2);
	}
}
