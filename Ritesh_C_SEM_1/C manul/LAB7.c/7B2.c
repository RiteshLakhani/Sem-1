#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	
	printf("\n Enter charcter: ");
	scanf("%d",&ch);
	
	switch(ch>='a' && ch<='z' || ch>='A' && ch<='z')
	{
		case 10:
			printf("\n  CHARCTER IS ALPHABATE");
			break;
			
		default:
			printf("\n NOT ALPHABATE");
			break;
	}
	getch();
}
