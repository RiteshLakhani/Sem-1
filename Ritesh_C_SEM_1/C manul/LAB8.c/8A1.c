#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	
	printf("\n Enter n value-> ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		printf("\n %d",i);
		i=i+1;
	}
	getch();
}
