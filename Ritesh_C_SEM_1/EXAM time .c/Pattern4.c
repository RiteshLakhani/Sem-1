#include<stdio.h>
#include<conio.h>

int main()
{
for(int i=1;i<=5;i++)
{
for(int j=1; j<=i;j++)
{
cout<<j;
}

cout<<”n”;
}
//now print lower part of pattern
for(int i=4;i>0;i–)
{
for(int j=1; j<=i;j++)
{
cout<<i;
cout<<”n”;
}
getch();
return 0;
}
