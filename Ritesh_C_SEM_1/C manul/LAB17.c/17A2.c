#include<stdio.h>
#include<conio.h>
void main()
{
	int *i;
	float *f;
	double *d;
	char *c;
	
	printf ("\n Enter Integer Value:");
	scanf("%d",&i);
	printf ("\n\n Enter Float Value:");
	scanf("%f",&f);

	printf("\n Value of Integer is :%d",i);
	printf("\n Address of Integer is : %d",&i);
	
	printf("\n Value of FLoat is :%f",*f);
	printf("\n Address of float is : %f",&f);
	getch();
}
