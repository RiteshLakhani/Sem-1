#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int l=0,w=0,t=0,c=0;
	
	fp=fopen("File1.txt","r");
	ch=getc(fp);
	
	while(ch!=EOF)
	{
		if(ch=='\n')
		{
			l++;
		}
		else if(ch=='\t')
		{
			t++;
		}
		else if(ch==' ')
		{
			w++;
		}
		else
		{
			c++;
		}
	}
	fclose(fp);
	
	printf("\n %d %d %d %d", l,t,w,c);
	
	return 0;
	
}
