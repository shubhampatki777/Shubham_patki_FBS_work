#include<stdio.h>

//function declaration (with pointer parameter,without return type)
void checkDivisible(int *num);

void main() {
    int n = 20;
    checkDivisible(&n);   //function call with address of variable 'n'
}

//function definition
void checkDivisible(int *num) {
    if(*num % 3 == 0 && *num % 5 == 0)
        printf("Divisible by both 3 and 5\n");
    else if(*num % 5 == 0)
        printf("Divisible by 5 but not by 3\n");
    else
        printf("Divisible by none\n");
}
