#include<stdio.h>

void calculator(int num1, int num2, char op);   // Function declaration

void main() {
    calculator(12, 4, '*');   // Function call with arguments
}

void calculator(int num1, int num2, char op) {  // Function definition
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
