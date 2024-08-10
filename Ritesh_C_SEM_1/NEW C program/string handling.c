#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char a[10],b[10];
	
	printf("\n Enter value->");
	scanf("%s",&a);
	
	fp=fopen("E:\\Ritesh\\one.txt","w");
	fputs(a,fp);
	fclose(fp);
	
	
	fp=fopen("E:\\Ritesh\\one.txt","r");
	fgets(b,6,fp);
	fclose(fp);
	
	printf("\n B=%s",b);
	
	getch();
	
}
