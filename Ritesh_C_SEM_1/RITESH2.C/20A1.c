//creat declare and intialize structre employee.

#include<stdio.h>
#include<conio.h>

struct employee
{
	char name[30];
	int empId;
	float salary;
};

int main()
{
	struct employee emp= {"Ritesh",1010,10000000.45};
	
	printf("\n Name:%s",emp.name);
	printf("\n Id: %d",emp.empId);
	printf("\n Salary:%f",emp.salary);
	
	return 0;
}
