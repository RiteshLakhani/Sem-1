#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	
	printf("\n Enter charcter: ");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("\n chartcer is vowel ");
	}
	else
	{
		printf("\n charcter is consonent ");
	}
	getch();
}
