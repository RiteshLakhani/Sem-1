#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int a,b;
	
	char c,d;
	
	printf("\n Enter character->");
	scanf("%c",&c);
	
	printf("\n Enter value->");
	scanf("%d",&a);
	
	fp=fopen("E:\\Ritesh\\one.txt","w");
	fprintf(fp,"%d %c",a,c);
	fclose(fp);
	
	
	fp=fopen("E:\\Ritesh\\one.txt","r");
	fscanf(fp,"%d %c",&b,&d);
	fclose(fp);
	
	printf("\n B=%d",b);
	printf("\n D=%c",d);
	
	getch();
	
}
