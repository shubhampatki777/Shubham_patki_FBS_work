#include<stdio.h>

void checkDivisible();   // Function declaration

void main() {
    checkDivisible();    // Function call
}

void checkDivisible() {  // Function definition
    int num = 15;

    if(num % 3 == 0 && num % 5 == 0)
        printf("Divisible by both 3 and 5\n");
    else if(num % 5 == 0)
        printf("Divisible by 5 but not by 3\n");
    else
        printf("Divisible by none\n");
}
