#include<stdio.h>
#include<conio.h>

struct student{
	char name[30];
	int roll;
	float cpi;
	int backlogs;
};

int main()
{
	int i;	
//	printf("\n Enter How many studnet you data have: ");
//	scanf("%d",&n);
	
	struct student student1[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter Student Name: ");
		gets(student1[i].name);
	
		printf("\n Enter Roll no: ");
		scanf("%d",&student1[i].roll);
	
		printf("\n Enter CPI: ");
		scanf("%f",&student1[i].cpi);
	
		printf("\n Enter Backlogs: ");
		scanf("%d",&student1[i].backlogs);
	}
	
	printf("\n\tName\tRollno\tCPI\tBacklogs");
	
	for(i=0;i<5;i++)
	{
		printf("\n Name:%s",student1[i].name);
		printf("\n Roll No:%d",student1[i].roll);
		printf("\n CPI:%f",student1[i].cpi);
		printf("\n Backlog:%d",student1[i].backlogs);
	}
}
