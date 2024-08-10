#include<stdio.h>
#include<conio.h>

struct student{
	char name[20];
	int  rollno;
	float cpi;
};
int main()
{
	struct student *studptr,stud1;
	
	studptr=&stud1;
	
	printf("\n Enter Name: ");
	scanf("%s",&studptr->name);
	
	printf("\n Enter Roll: ");
	scanf("%d",&studptr->rollno);
	
	printf("\n Enter CPI: ");
	scanf("%f",&studptr->cpi);
	
	printf("\n Name:%s",studptr->name);
	printf("\n Rolln:%d",studptr->rollno);
	printf("\n CPI:%f",studptr->cpi);
	
	getch();
}

