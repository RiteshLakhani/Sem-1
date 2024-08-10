#include<stdio.h>
void reference(int *a,int *b);

int main()
{
	int a=5,b=10;
	reference(&a,&b);
	return 0;
}

void reference(int *a,int *b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
	
	printf("\n A=%d",*a);
	printf("\n B=%d",*b);
}
