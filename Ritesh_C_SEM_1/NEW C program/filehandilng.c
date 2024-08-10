#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int a,b,i;
	
	printf("\n Enter value->");
	scanf("%d",&a);
	
	fp=fopen("E:\\Ritesh\\one.txt","w");
	putw(a,fp);
	fclose(fp);
	
	
	fp=fopen("E:\\Ritesh\\one.txt","r");
	b=getw(fp);
	fclose(fp);
	
	printf("\n B=%d",b);
	
	getch();
	
}
