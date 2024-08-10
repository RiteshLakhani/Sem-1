#include<Stdio.h>
#include<conio.h>
//with using arithmatic and comparision 
void main()
{
	int x,y;
	
	printf("\n Enter x and y : ");
	scanf("%d %d",&x,&y);
	
    if (x==y) {
        printf ("x=%d is equal to y=%d\n", x, y);
    }
    else {
        printf ("x=%d is not equal to y=%d\n", x, y);
    }
    
    getch();
}
