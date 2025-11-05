#include<stdio.h>

void calculator();   // Function declaration

void main() {
    calculator();    // Function call
}

void calculator() {  // Function definition
    int num1 = 10, num2 = 5;
    char op = '+';

    if(op == '+')
        printf("Result = %d\n", num1 + num2);
    else if(op == '-')
        printf("Result = %d\n", num1 - num2);
    else if(op == '*')
        printf("Result = %d\n", num1 * num2);
    else if(op == '/')
        printf("Result = %d\n", num1 / num2);
    else if(op == '%')
        printf("Result = %d\n", num1 % num2);
    else
        printf("Invalid operator!\n");
}
