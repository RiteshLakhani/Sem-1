#include<stdio.h>
int val(int,float);

main()
{
	int a;
	float b,sum;
	
	printf("\n Enter Value of A-> ");
	scanf("%d",&a);
	
	printf("\n Enter value of B-> ");
	scanf("%f",&b);
	
	sum=val(a,b);
	
	printf("\n Sum=%f",sum);
	
	getch();
}

int val(int x,float y)
{
	float sum;
	printf("\n x=%d",x);
	printf("\n y=%f",y);
	sum=x+y;
	return sum;
	
}
