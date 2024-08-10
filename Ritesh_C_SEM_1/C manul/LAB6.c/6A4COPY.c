#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;

printf("Enter x:");
scanf("%d",&x);

//To find the last number
y=x%10;

//To check if last digit is even
if(y%2==0)
printf("\n%d is even",y);

//otherwise
else
printf("%d is an odd number",y);
getch();
}
