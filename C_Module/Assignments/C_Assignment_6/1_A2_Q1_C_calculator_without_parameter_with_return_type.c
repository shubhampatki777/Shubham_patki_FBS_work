#include<stdio.h>

int calculator();   // Function declaration

void main() {
    int result = calculator();    // Function call
    printf("Returned Result = %d\n", result);
}

int calculator() {  // Function definition
    int num1 = 15, num2 = 3;
    char op = '/';
    int res = 0;

    if(op == '+')
        res = num1 + num2;
    else if(op == '-')
        res = num1 - num2;
    else if(op == '*')
        res = num1 * num2;
    else if(op == '/')
        res = num1 / num2;
    else if(op == '%')
        res = num1 % num2;
    else {
        printf("Invalid operator!\n");
        res = 0;
    }
    return res;
}
