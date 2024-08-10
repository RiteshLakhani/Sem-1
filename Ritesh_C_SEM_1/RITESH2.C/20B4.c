//4. Add two times hh, mm and ss using structure.

#include<stdio.h>
struct time
{
	int hours;
	int min;
	int seconds;
};
int main()
{
	struct time t1,t2;
	
	int h,m,s;
	
	printf("\n Enter 1st time:");
	
	printf("\n Enter Hours: ");
	scanf("%d",&t1.hours);
	
	printf("\n Enter Minutes: ");
	scanf("%d",&t1.min);
	
	printf("\n Enter Second: ");
	scanf("%d",&t1.seconds);
	
	printf("\n The time is %d:%d:%d",t1.hours,t1.min,t1.seconds);
	
	
	printf("\n Enter 2nd time:");
	
	printf("\n Enter Hours: ");
	scanf("%d",&t2.hours);
	
	printf("\n Enter Minutes: ");
	scanf("%d",&t2.min);
	
	printf("\n Enter Second: ");
	scanf("%d",&t2.seconds);
	
	printf("\n The time is %d:%d:%d",t2.hours,t2.min,t2.seconds);
	
	h=t1.hours+t2.hours;
	m=t1.min+t2.min;
	s=t1.seconds+t2.seconds;
	
	printf("\n Sum of the two times is %d:%d:%d",h,m,s);
	
	return 0;
	
}

