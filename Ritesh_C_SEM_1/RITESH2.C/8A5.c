#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,odd=0,even=0;
	
	i=1;
	while(i<=10)
	{
		printf("\n Enter the value-> ");
		scanf("%d",&n);
		
		if(n%2==0)
		{
			even=even+1;
		}
		else
		{
			odd=odd+1;
		}
		i=i+1;
	}
	printf("\n even=%d",even);
	printf("\n odd=%d",odd);
	
	getch();
}
