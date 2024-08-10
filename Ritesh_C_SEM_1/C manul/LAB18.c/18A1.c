//Add two number using function. No arg No return.

#include<stdio.h>
#include<conio.h>
void addition();
int main()
{
	int a,b;
	addition(a,b);
	return 0;
}

void addition()
{
	int a,b;
	printf("\n Enter no A: ");
	scanf("%d",&a);
	printf("\n Enter no B: ");
	scanf("%d",&b);
	printf("\n Sum=%d",a+b);
}
