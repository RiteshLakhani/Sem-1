//Perform Addition,Subtraction,Multiplication, and divison of 2 number as per users choice.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ch;
	
	printf("\n Enter a: ");
	scanf("%d",&a);
	
	printf("\n Enter b: ");
	scanf("%d",&b);
	
	printf("\n 1.Addition ");
	printf("\n 2.Subtraction ");
	printf("\n 3.Multiplication ");
	printf("\n 4.Divison ");
	
	printf("\n Enter choice-> ");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		printf("\n Add=%d",a+b);
	}
	else if(ch==2)
	{
		printf("\n Sub=%d",a-b);
	}
	else if(ch==3)
	{
		printf("\n mul=%d",a*b);
	}
	else if(ch==4)
	{
		printf("\n div=%d",a/b);
	}
	else
	{
		printf("\n Invalid no: ");
	}
	
	getch();
}
