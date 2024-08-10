#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int a,b,i,n;
	
	//printf("\n Enter value->");
	//scanf("%d",&a);
	
	fp=fopen("E:\\Ritesh\\one.txt","w");
	for(i=1;i<=10;i++)
	{
		putw(i,fp);
	}
	fclose(fp);
	
	fp=fopen("E:\\Ritesh\\one.txt","r");
	for(i=1;i<=10;i++)
	{
		b=getw(fp);
		printf("\n B=%d",b);
	
				
	}
	fclose(fp);
	
	
	
	getch();
	
}
