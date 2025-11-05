#include<stdio.h>

int calculator(int num1, int num2, char op);   // Function declaration

void main() {
    int result = calculator(20, 5, '-');   // Function call
    printf("Result = %d\n", result);
}

int calculator(int num1, int num2, char op) {  // Function definition
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
