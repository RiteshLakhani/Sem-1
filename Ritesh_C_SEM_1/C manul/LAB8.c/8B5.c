//Printf sum od series 1+4+9+16+25+36+....n

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,r,sum;
	
	printf("\n ENTER NO OF SQUARE: ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		r=i*i;
		printf("\n %d is no and %d is square",i,r);
		sum=sum+r;
		i=i+1;
	}
	printf("\n SUM=%d",sum);

}
