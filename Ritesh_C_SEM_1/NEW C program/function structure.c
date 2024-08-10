#include<stdio.h>
void val(struct student);
struct student{
	int a;
	int b;
};
main()
{
	struct student s;
	
	printf("\n Enter Value->");
	scanf("%d",&s.a);
	
	printf("\n Enter Value->");
	scanf("%d",&s.b);
	
	val(s);
	getch();
	
}
void val(struct student s1)
{
	printf("\n %d",s1.a);
	printf("\n %d",s1.b);
}
