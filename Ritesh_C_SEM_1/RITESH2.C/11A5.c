//Find factorial of the given number.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,ans;
	
	printf("\n Enter factorial no: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		ans=ans*i;
	}
	printf("\n ans=%d",ans);
	getch();
}
