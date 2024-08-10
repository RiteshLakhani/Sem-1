//13A 1. *****
//		 ****
//       ***
//       **
//       *

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	
	for(i=5;i>0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf(" *",j);
			
		}
		printf("\n");
	}
	getch();
}
