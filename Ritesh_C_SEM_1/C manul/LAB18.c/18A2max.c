//2.Find maximum and minimum between two number using function.
//(i)max -> with argument No return.

#include<stdio.h>
#include<conio.h>
void max(int a,int b);
int main()
{
	int a,b;
	max(a,b);
	return 0;
}
void max(int a,int b)
{
	printf("\n Enter A: ");
	scanf("%d",&a);
	
	printf("\n Enter B: ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d is max ",a);
	}
	else
	{
		printf("%d is max ",b);
	}
}
