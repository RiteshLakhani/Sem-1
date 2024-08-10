//2.Demonstrate nested structure.

#include<stdio.h>
struct Address
{
	char HouseNo[25];
	char City[25];
	char PinCode[25];
};

struct Student
{
	char name[25];
	int roll;
	float cpi;
	struct Address Add;
};

	int main()
	{
		int i;
		struct Student s;
		
		printf("\n Enter Student Name: ");
		scanf("%s",&s.name);
		
		printf("\n Enter Student Roll Number: ");
		scanf("%d",&s.roll);
		
		printf("\n Enter Studnet CPI: ");
		scanf("%f",&s.cpi);
		
		printf("\n Enter Student House No: ");
		scanf("%s",&s.Add.HouseNo);
		
		printf("\n Enter Student City: ");
		scanf("%s",&s.Add.City);
		
		printf("\n Enter Student pincode: ");
		scanf("%s",&s.Add.PinCode);
		
		printf("\n Details of the student: ");
		
		printf("\n Student Name: %s",s.name);
		printf("\n Roll Number:%d",s.roll);
		printf("\n Student CPI:%f",s.cpi);
		printf("\n Student House No:%s",s.Add.HouseNo);
		printf("\n Student City: %s",s.Add.City);
		printf("\n Studnet Pincode: %s",s.Add.PinCode);
		
		return 0;
		
	}
