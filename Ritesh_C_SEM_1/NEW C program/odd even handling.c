#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp,*fpo,*fpe;
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
	fpo=fopen("E:\\Ritesh\\odd.txt","w");
	fpe=fopen("E:\\Ritesh\\even.txt","w");
	
	for(i=1;i<=10;i++)
	{
		b=getw(fp);
		if(b%2==0)
		{
			putw(b,fpe);
		}
		else
		{
			putw(b,fpo);
		}				
	}
	fclose(fp);
	fclose(fpo);
	fclose(fpe);
	
	fpo=fopen("E:\\Ritesh\\odd.txt","r");
	//b=getw(fpo);
	do
	{
		b=getw(fpo);
		printf("\n %d",b);
	}while(b!=EOF);
	fclose(fpo);
	fpe=fopen("E:\\Ritesh\\even.txt","r");
	do
	{
		b=getw(fpe);
		printf("\n %d",b);
	}while(b!=EOF);
	fclose(fpe);
	
	getch();
	
}
