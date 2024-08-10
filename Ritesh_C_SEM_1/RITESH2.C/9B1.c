//Write all upper case and lower case alphabets.

#include<stdio.h>
#include<conio.h>
void main()
{
	char i;
	
	i=65;
	printf("\n Upper case: ");
	while(i<=90)
	{
		printf(" %c",i);
		i++;
	}
	
	i=97;
	printf("\nLower case: ");
	while(i<=122)
	{
		printf(" %c",i);
		i++;
	}
	
	getch();
}
