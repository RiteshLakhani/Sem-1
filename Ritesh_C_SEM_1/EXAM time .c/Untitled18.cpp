#include<stdio.h>
#include<conio.h>

struct Time{
	int hours;
	int min;
	int sec;
};

int main()
{
	struct Time t1,t2;
	
	int h,m,s;
	
	printf("\n Enter First time.");
	
	printf("\n Enter Hour: ");
	scanf("%d",&t1.hours);
	
	printf("\n Enter Min: ");
	scanf("%d",&t1.min);
	
	printf("\n Enter Second: ");
	scanf("%d",&t1.sec);
	
	printf("\n The time is %d:%d:%d",t1.hours,t1.min,t1.sec);
	
	printf("\n\n");
	
	printf("\n Enter Second time.");
	
	printf("\n Enter Hour: ");
	scanf("%d",&t2.hours);
	
	printf("\n Enter Min: ");
	scanf("%d",&t2.min);
	
	printf("\n Enter Second: ");
	scanf("%d",&t2.sec);
	
	printf("\n The time is %d:%d:%d",t2.hours,t2.min,t2.sec);
	
	h=t1.hours+t2.hours;
	m=t1.min+t2.min;
	s=t1.sec+t2.sec;
	
	printf("\n Sum of The Two times is : %d:%d:%d",h,m,s);
	
	getch();
	
}
