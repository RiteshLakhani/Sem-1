#include<stdio.h>
#include<string.h>
void main()
{
	char str[20],*ptr;
	printf("Enter string:");
	scanf("%c",&str);
	gets(str);
	ptr=&str;
	printf("%d",strlen(*ptr));
	getch();
}
