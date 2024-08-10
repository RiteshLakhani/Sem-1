#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	
	printf("\n Enter value->");
	scanf("%c",&ch);
	
	if(ch>='a'&& ch<='z')
	{
		printf("\n Lower  case");		
	}
	else if(ch>='A'&& ch<='Z')
	{
		printf("\n Upper case");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\n digit");
	}
	else
	{
		printf("\n Speicial charcter");
	}
	getch();	
}
