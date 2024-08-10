//caculate x^y without using power function.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x,y,ans=1,t;
	
	printf("\n Enter base of the no: ");
	scanf("%d",&x);
	
	printf("\n Enter power of the no: ");
	scanf("%d",&y);
	
	for(i=1;i<=y;i++)
	{
		t=x;
		ans=ans*t;
		
	}
	printf("\n %d",ans);
	getch();
}
