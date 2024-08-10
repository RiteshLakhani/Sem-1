#include <stdio.h>

int factorial(int n) {
    int stack[100];
    int top = -1;
    int temp_rec;
    int factorail = 1;
    int param = 5;
    void* address = &&step1;

step1:
    top++;
    stack[top] = param;
    stack[top+1] = (int)&&step4;
    goto step2;

step2:
    if (param == 0) {
        factorail = 1;
        goto step4;
    }
    else {
        param = param - 1;
        address = &&step3;
        goto step1;
    }

step3:
    factorail = param * factorail;
    goto *address;

step4:
    temp_rec = stack[top];
    top--;
    param = temp_rec;
    address = (void*)stack[top+1];
    goto *address;

    return factorail;
}

int main() {
    int n = 5;
    int result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}

