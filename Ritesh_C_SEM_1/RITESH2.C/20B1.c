//20B 1.Demonstrate structure pointer.

#include<stdio.h>

struct student
{
	char name[20];
	int rollno;
	float cpi;
};

int main()
{
	struct student *studPtr,stud1;
	
	studPtr=&stud1;
	
	printf("\n Enter Name: ");
	scanf("%s",&studPtr->name);
	
	printf("\n Enter Roll No: ");
	scanf("%d",&studPtr->rollno);
	
	printf("\n Enter CPI: ");
	scanf("%f",&studPtr->cpi);

	printf("\n Student Details:\n");
	
	printf("\n Name:%s",studPtr->name);
	printf("\n Roll no:%d",studPtr->rollno);	
	printf("\n CPI:%f",studPtr->cpi);	
	return 0;
}


