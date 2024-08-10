#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ch;
	
	printf("\n Enter VALUE OF A: ");
	scanf("%d",&a);
	
	printf("\n Enter Value of B: ");
	scanf("%d",&b);
	
	printf("\n 1.Addition");
	printf("\n 2.Addition");
	printf("\n 3.Addition");
	printf("\n 4.Addition");
	
	printf("\n Enter your choice-> ");
	scanf("%d",&ch);

	if(ch==1)
	{
		printf("a+b=%d",a+b);
	}
	else if(ch==2)
	{
		printf("a-b=%d",a-b);
	}
	else if(ch==3)
	{
		printf("a*b=%d",a*b);
	}
	else if(ch==4)
	{
		printf("a/b=%d",a/b);
	}
	else
	{
		printf("\n Enter invalid number ");
	}
	getch();
}
	
		

