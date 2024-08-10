#include<stdio.h>
void  val(char []);
main()
{
	char a[10],i,sum,c;

	
		printf("\n Enter Name-> ");
		scanf("%s",&a);
	
	val(a);
	getch();
}
void val(char b[10])
{
	printf("\n Your Name is:%s",b);
}
