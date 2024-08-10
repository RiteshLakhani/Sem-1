#include<stdio.h>
#include<conio.h>
void fun(int x,int y);
void main()
{
	int A=10,B=20;
	
	printf("\n Values befor calling is %d and %d",A,B);
	
	fun(A,B);
	
	printf("\n Values after calling is %d and %d",A,B);
	
	getch();
}
void fun(int x,int y)
{
	x=11;
	y=12;
}
