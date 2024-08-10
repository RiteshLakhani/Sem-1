//find factorial of the given number.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,ans=1;
	
	printf("\n Enter number: ");
	scanf("%d",&a);
	
	i=1;
	while(i<=a)
	{
		ans=ans*i;
		i=i+1;
	}
	printf("\n %d",ans);
	getch();
	
}
