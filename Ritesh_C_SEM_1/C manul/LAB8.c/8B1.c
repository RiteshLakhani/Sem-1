#include<stdio.h>
#include<math.h>
void main()
{
	int i;
	float r;
	
	i=1;
	while(i<=10)
	{
		r=sqrt(i);
		printf("\n %d is number and %f is root",i,r);
		i=i+1;
	}
	getch();
}
