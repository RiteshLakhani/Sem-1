#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	
	printf("\n Enter value of i=");
	scanf("%d",&i);
	
	printf("\n Enter value of j=");
	scanf("%d",&j);
	
	i=i+j;
	j=i-j;
	i=i-j;
	
	printf("\n  i(%d)=j(%d)",i,j);
	
	getch();
	
}
