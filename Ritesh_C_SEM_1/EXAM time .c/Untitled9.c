#include<stdio.h>
void main()
{
	FILE *p;
	char ch;
	int ln=0,t=0,w=0,c=0;
	
	p=fopen("File1.txt","r");
	ch=getc(p);
	
	while(ch!=EOF)
	{
		if(ch=='\n')
		{
			ln=ln+1;
		}
		else if(ch=='\t')
		{
			t=t+1;
		}
		else if(ch==' ')
		{
			w=w+1;
		}
		else
		{
			c=c+1;
		}
		ch=getc(p);
	}
	fclose(p);
	
	printf("\n Lines=%d, tabs=%d, words=%d, charcter=%d",ln,t,w,c);
	
	getch();
}
