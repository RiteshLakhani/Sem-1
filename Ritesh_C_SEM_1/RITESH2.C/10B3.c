//check whether the given numer is palindrome or not.

#include<stdio.h>
#include<conio.h>
void main()
{
	int rev=0,a,n;
	
	printf("\n Enter a no: ");
	scanf("%d",&n);
	
	a=n;
	
	while(n!=0)
	{
		rev=rev*10;
		rev=rev+n%10;
		n=n/10;
	}
	
	if(rev==a)
	{
		printf("\n %d is palindrome number",rev);
	}
	else
	{
		printf("\n %d is not palindrome number",a);
	}
	getch();
}
