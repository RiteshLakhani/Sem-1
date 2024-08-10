//Find length of string using pointer.

#include<stdio.h>
#include<string.h>
void main()
{
	char str[20],*pt;
	int i=0;
	
	printf("\n Enter length of string: ");
	scanf("%c",&str);
	
	gets(str);
	pt=str;
	
	while(*pt!='\0')
	{
		i++;
		pt++;
	}
	printf("\n Length of string:%d",i);
	
	getch();
}
