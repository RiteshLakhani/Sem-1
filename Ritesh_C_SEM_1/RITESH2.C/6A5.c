#include<stdio.h>
#include<conio.h>
void main()
{
	int c,math,wd,eg,phy,total,per;
	
	printf("\n Enter marks of CPC: ");
	scanf("%d",&c);
	
	printf("\n Enter mark of Maths: ");
	scanf("%d",&math);
	
	printf("\n Enter mark of the WD: ");
	scanf("%d",&wd);
	
	printf("\n Enter mark of the EG: ");
	scanf("%d",&eg);
	
	printf("\n Enter mark of the PHY: ");
	scanf("%d",&phy);
	
	if(c>=35 && math>=35 && wd>=35 && eg>=35 && phy>=35 )
	{
		printf("\n Pass");
	 
	 total=c+math+wd+eg+phy;
	 printf("\n total=%d",total);
	
	per=total/5;
	printf("\n Per=%d",per);
	
	 if(per>=36 && per<=45)
	{
		printf("\n Paas class");
	}
	else if(per>=46 && per<=60)
	{
		printf("\n Second class");
	}
	else if(per>=61 && per<=70)
	{
		printf("\n First class");
	}
	else if(per>=70)
	{
		printf("\n Disction class");
	}
}
	else
	{
		printf("\n Fail");
		
	}
	getch();
	
}
