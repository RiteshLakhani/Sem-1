#include<stdio.h>
#define size 10
int stack[size],top=-1;
void push(int);
int pop();
int fact(int);

void main()
{
	int n,i;
	printf("\n Enter value: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	push(i);
	printf("\n Factorail of %d is %d: ",n,fact(n));
	getch();	
}

void push(int ele)
{
	if(top==size-1)
	{
		printf("\n Stack is Overflow");
	}
	else
	{
		top=top+1;
		stack[top]=ele;
	}
}

int pop()
{
	int ele;
	if(top==-1)
	{
		printf("\n stack is underflow");
	}
	else
	{
		ele=stack[top];
	}
	return ele;
}

int fact(int n)
{
	int pro=1,i,x;
	
	for(i=1;i<=n;i++)
	{
		x=pop();
		pro=pro*x;
	}
	return pro;
}
