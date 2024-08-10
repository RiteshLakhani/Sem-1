#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char a,b,i;
	
	printf("\n Enter value->");
	scanf("%c",&a);
	
	fp=fopen("E:\\Ritesh\\one.txt","w");
	fputc(a,fp);
	fclose(fp);
	
	
	fp=fopen("E:\\Ritesh\\one.txt","r");
	b=fgetc(fp);
	fclose(fp);
	
	printf("\n B=%c",b);
	
	getch();
	
}
