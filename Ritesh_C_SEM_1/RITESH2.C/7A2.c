#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	
	printf("\n Enter no month: ");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
				printf("\n 31 days");
				break;
			
		case 2:
				printf("\n 28 and 29 days");
				break;
			
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\n 30 days");
			break;
			
		default:
			printf("\n Invalid");
	}
	getch();
}
