#include <stdio.h>
 //without using aritmatic or comparison 
int checkForEquality(int x, int y) {
    return !(x ^ y);
}
 
int main(void)
{
    int x,y;
    
    printf("\n Enter x and y: ");
    scanf("%d %d",&x,&y);
 
    if (checkForEquality(x, y)) {
        printf ("x=%d is equal to y=%d\n", x, y);
    }
    else {
        printf ("x=%d is not equal to y=%d\n", x, y);
    }
 
    return 0;
}

