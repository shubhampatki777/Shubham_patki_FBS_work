#include<stdio.h>

//function declaration(with pointer parameters,without return type)
void calculator(int *num1, int *num2, char *op);

void main() {
    int a = 12, b = 4;
    char operation = '*';
    calculator(&a, &b, &operation);   //function call with addresses
}

//function definition
void calculator(int *num1, int *num2, char *op) {
    if(*op == '+')
        printf("Result = %d\n", *num1 + *num2);
    else if(*op == '-')
        printf("Result = %d\n", *num1 - *num2);
    else if(*op == '*')
        printf("Result = %d\n", *num1 * *num2);
    else if(*op == '/')
        printf("Result = %d\n", *num1 / *num2);
    else if(*op == '%')
        printf("Result = %d\n", *num1 % *num2);
    else
        printf("Invalid operator!\n");
}
