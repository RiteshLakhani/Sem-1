#include <stdio.h>

int factorial(int n) {
    int stack[100];
    int top = -1;
    int temp_rec;
    int factorial = 1;
    int param = n;
    void* address = &&step1;

step1:
    top++;
    stack[top] = param;
    stack[top+1] = (int)&&step4;
    goto step2;

step2:
    if (param == 0) {
        factorial = 1;
        goto step4;
    }
    else {
        param = param - 1;
        address = &&step3;
        goto step1;
    }

step3:
    factorial = param * factorial;
    goto *address;

step4:
    temp_rec = stack[top];
    top--;
    param = temp_rec;
    address = (void*)stack[top+1];
    goto *address;

    return factorial;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}

