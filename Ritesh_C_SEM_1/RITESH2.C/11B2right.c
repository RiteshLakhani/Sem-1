//11B 2.Count frequency of digit in an integer.

#include<stdio.h>
#include<conio.h>

main()
{
  int no,x,a[10],i,len=0,j,cnt=0,n;
  

	printf("\n Enter no -->");
	scanf("%d",&no);

	i=0;
	while(no>0)
	{
	  x=no%10;
	  a[i]=x;
	  i++;
  //	  printf("\n %d",x);
	  no=no/10;
	}
	len=i;
//	printf("\n length --> %d",len);

	for(i=0;i<=9;i++)
	{
	  cnt=0;
	  for(j=0;j<len;j++)
	  {
	    if(a[j]==i)
	    {
	      cnt++;
	    }
	  }
	  printf("\n occurance of %d is ==> %d",i,cnt);
	}

  getch();
}
