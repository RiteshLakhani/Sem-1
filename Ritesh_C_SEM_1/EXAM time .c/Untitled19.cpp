#include<stdio.h>
#include<conio.h>
struct Time input();
struct Time{
	int hours;
	int min;
	int sec;
};

int main()
{
	struct Time t;
	
	t=input();
	printf("\n Hours:Minutes:Seconds\n %d : %d : %d ",t.hours,t.min,t.sec);
	return 0;
}

struct Time input()
{
	struct Time t1;
	
	printf("\n Enter Hour: ");
	scanf("%d",&t1.hours);
	
	printf("\n Enter Min: ");
	scanf("%d",&t1.min);
	
	printf("\n Enter Second: ");
	scanf("%d",&t1.sec);
	
	return t1;
}
