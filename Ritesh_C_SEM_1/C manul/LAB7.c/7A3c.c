#include<stdio.h>
#include<conio.h>
int main()
{
	int a,n1,n2,add,sub,mul,div;
	
	printf("\n 1=addtion");
	prinft("\n 2=subtraction");
	printf("\n 3=Multiplication");
	printf("\n 4=Divison");
	
	printf("\n Enter the choice: ");
	scanf("%d",&a);
	
	printf("\n Enter value of a: ");
	scanf("%d",&n1);
	
	printf("\n Enter value of b: ");
	scanf("%d",&n2);
	
	switch(a)
	{
		case 1:
			add=n1+n2;
			printf("\n a+b=%d",add);
			break;
		
		case 2:
			sub=n1-n2;
			printf("\n a-b=%d",sub);
			break;
		
		case 3:
			mul=n1*n2;
			printf("\n a*b=%d",mul);
			break;
			
		case 4:
			div=n1/n2;
			printf("\n a/b=%d",div);
			break;
		
		default:
			printf("\n Invalid");
			break;
	}
getch();
}
