//Caculate x^y without using power function.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,b,ans;
	
	printf("\n Enter no: ");
	scanf("%d",&a);
	
	printf("\n Enter power of no: ");
	scanf("%d",&b);
	
	i=1;
	while(i<=b)
	{
		ans=ans*a;
		i=i+1;
	}
	printf("\n %d",ans);
	
	getch();
}
