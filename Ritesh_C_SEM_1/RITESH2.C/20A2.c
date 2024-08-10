//Create a structure book with book title, author, publication, and price. Read data of 3 books and display.

#include<stdio.h>
#include<string.h>

struct bookdetails
{
	char title[50];
	char author[50];
	char publication[50];
	double price;
};

int main()
{	
	int i,n;
		
	printf("\nEnter a number of book: ");
	scanf("%d",&n);
	
	struct bookdetails array[n];
	
	for(i=0;i<n;i++)
	{
		printf("\n\n %d is record of book",i+1);
		
		printf("\n Enter book name: ");
		scanf("%s",&array[i].title);
		
		printf("\n Enter book Author name: ");
		scanf("%s",&array[i].author);
		
		printf("\n Enter book of Publication: ");
		scanf("%s",&array[i].publication);
		
		printf("\n Enter book Price: ");
		scanf("%lf",&array[i].price);
	}
	
	for(i=0;i<n;i++)
	
	{
		printf("\n\n %d is record of book",i+1);
		
		printf("\n\n Title: %s",array[i].title);
		printf("\n\n Author: %s",array[i].author);
		printf("\n\n Publication: %s",array[i].publication);
		printf("\n\n Price: %lf",array[i].price);
		
	}

	
}




