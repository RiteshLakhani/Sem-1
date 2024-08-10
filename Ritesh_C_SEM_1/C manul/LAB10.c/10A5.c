//print given number in reverse order.

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rev=0;
	
	printf("\n Enter Number-> ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rev=rev*10;
		rev=rev+n%10;
		n=n/10;
	}
	printf("\n Reverse of entered number is %d",rev);
	
	getch();
}
//int i,n,r;
	
//	printf("\n Enter Number-> ");
//	scanf("%d",&n);
	
//	while(n>0)
//	{
//		r=n%10;
//		printf("%d",r);
//		n=n/10;
//	}
