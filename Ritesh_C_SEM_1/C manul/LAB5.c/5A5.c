#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,mul=0,max=0,x;
	
	printf("\n Enter value of a: ");
	scanf("%d",&a);
	
	printf("\n Enter value of b: ");
	scanf("%d",&b);
	
	printf("\n Enter value of c: ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\n a is bigger");
			max=a;
		//	mul=b*c;
		}
		else
		{
			printf("\n c is bigger");
			max=c;
		//	mul=a*b;
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n b is bigger");
			max=b;
		//	mul=a*c;
		}
		else
		{
			printf("\n c is bigger");
			max=c;
		//	mul=a*b;
		}
	}
	printf("\n mull=%d",max);
	

		
	}
	getch();
}
