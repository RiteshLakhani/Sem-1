//Get


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char a[5];
	int len=0,i,flag=0,ch;
	
	printf("\n Enter value: ");
	scanf("%s",&a);
	
	printf("\n\n%s",a);
	
	len=strlen(a);
	printf("\n Length=%d",len);
	
	for(i=0;i<len;i++)
	{
		if(isdigit(a[i]))
		{
			flag=1;
		}
	}
	
	if(flag==1)
	{
		printf("\n Enter choice -->");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("\n%d",atoi(a));
				break;
				
			case 2:
				printf("\n%d",(float)atof(a));
				break;
					
		}

	}
	
	
}
