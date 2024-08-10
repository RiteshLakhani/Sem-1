//Creat structure studetn with name,percentage and age. Raead data of 5 student usig array of structure.

#include<stdio.h>

struct student
{
	char name[20];
	float percentage;
	int age;
	
};
int main()
{
	int i,n;
	
	printf("\n How many records u want to store: ");
	scanf("%d",&n);
	
	struct student arry[n];
	
	for(i=0;i<n;i++)
	{
		
		printf("\n\n Enter %d record:\n",i+1);
		
		
		printf("\n Enter student Name: ");
		scanf("%s",&arry[i].name);
		
		printf("\n Enter Percentage of student: ");
		scanf("%f",&arry[i].percentage);
		
		printf("\n Enter student Age: ");
		scanf("%d",&arry[i].age);	
	}
	for(i=0;i<n;i++)
	{
		printf("\n\n Name:%s",arry[i].name);
		printf("\n\n Percentage:%f",arry[i].percentage);
		printf("\n\n Age:%d",arry[i].age);
	}
	return 0;
}
