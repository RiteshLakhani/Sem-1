#include<stdio.h>
#include<conio.h>
void main()
{
	int *fp;
	
	fp=(int *)malloc(sizeof(int));
	
	*fp=25;
	
	printf("\n %d",*fp);
	
	free(fp);
	
	getch();
}
