//print average of three numbers.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,sum,avg;
	
	printf("\n Enter int value of A->");
	scanf("%d",&i);
	
	printf("\n Enter int value of B->");
	scanf("%d",&j);
	
	printf("\n Enter int value of C->");
	scanf("%d",&k);
	
	sum=i+j+k;
	
	avg=sum/3;
	printf("\n Avg=%d",avg);
	
	getch();
	
}
