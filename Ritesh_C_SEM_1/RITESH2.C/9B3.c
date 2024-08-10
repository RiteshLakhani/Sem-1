//Convert given number in words(i.e n=3456-> output= THREE FOUR FIVE SIX)

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,rev_num=0;
	
	printf("\n Enter no: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		rev_num=(rev_num*10)+rem;
		n=n/10;
	}
	
	while(rev_num>0)
	{
		rem=rev_num%10;
		
		switch(rem)
		{
			case 1:
					printf("\n One");
					
			case 2:
					printf("\n Two");
					
					
			case 3: 
			    	printf("\n Three");
			    	
			
			case 4: 
			    	printf("\n Four");
			    	
			
			case 5: 
			    	printf("\n Five");
			    	
			    	
			case 6: 
			    	printf("\n Six");
			    	
			    	
			case 7: 
			    	printf("\n Seven");
			    	
			    	
			case 8: 
			    	printf("\n Eight");
			    	
			
			case 9: 
			    	printf("\n Nine");
			    	
			    	
			rev_num=rev_num/10;
		}
	getch();
	}
}
