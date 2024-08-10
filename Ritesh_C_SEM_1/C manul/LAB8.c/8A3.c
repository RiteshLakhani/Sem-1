#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	
	printf("\n Enter int ->");
	scanf("%d",&a);
	
	printf("\n Enter int ->");
	scanf("%d",&b);
	
	while(a<=b)
	{
		if(a%2==0)
		{
			printf("\n %d",a);
		}
		a=a+1;
	}
	getch();
}
