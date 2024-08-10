#include<stdio.h>
void main()
{
	int i,n;
	int *fp;
	
	printf("\n Enter how many number : ");
	scanf("%d",&n);
	
	fp=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
	{
		scanf("%d",fp);
		fp++;
	}
	
	free(fp);
	getch();
}
