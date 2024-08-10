//(ii)min no print.No arg with return.

#include<stdio.h>
#include<conio.h>
int min();
int main()
{
	int ans;
	ans=min();
	printf("\n %d",ans);
	return 0;
}
int min()
{
	int a,b;
	
	printf("\n Enter A: ");
	scanf("%d",&a);
	
	printf("\n Enter B: ");
	scanf("%d",&b);
	
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

