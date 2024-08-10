#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void str1(char []);
void main()
{
	char b[100];

	
	printf("\n Enter Sring: ");
	scanf("%s",&b);
	
	str1(b);
	getch();
}
void str1(char a[100])
{
	int i;
	
	for(i=0;a[i]!='\0';i++)
	{
		if(isupper(a[i]))
		{
			a[i]=tolower(a[i]);
		}
		else
		{
			a[i]=toupper(a[i]);
		}
	}
		printf("\n %s",a);
		
}
