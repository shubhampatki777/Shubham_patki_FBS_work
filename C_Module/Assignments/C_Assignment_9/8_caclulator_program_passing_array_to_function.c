#include<stdio.h>

//function declaration(passing arrays to function)
void calculator(int num1[], int num2[], char op[], int size);

int main() {
    int num1[] = {12, 15, 20, 25, 10};    
    int num2[] = {4, 5, 10, 5, 3};        
    char op[]  = {'+', '-', '*', '/', '%'}; 
    int size = sizeof(num1) / sizeof(num1[0]);

    calculator(num1, num2, op, size); //function call(passing arrays)
	return 0;
}
//function definition
void calculator(int num1[], int num2[], char op[], int size) {
    for(int i = 0; i < size; i++) {
        printf("\nOperation %d: %d %c %d = ", i + 1, num1[i], op[i], num2[i]);

        if(op[i] == '+')
            printf("%d\n", num1[i] + num2[i]);
        else if(op[i] == '-')
            printf("%d\n", num1[i] - num2[i]);
        else if(op[i] == '*')
            printf("%d\n", num1[i] * num2[i]);
        else if(op[i] == '/')
            printf("%d\n", num1[i] / num2[i]);
        else if(op[i] == '%')
            printf("%d\n", num1[i] % num2[i]);
        else
            printf("Invalid operator!\n");
    }
}
