#include<stdio.h>

void checkDivisible(int num);   // Function declaration

void main() {
    checkDivisible(20);   // Function call with argument
}

void checkDivisible(int num) {  // Function definition
    if(num % 3 == 0 && num % 5 == 0)
        printf("Divisible by both 3 and 5\n");
    else if(num % 5 == 0)
        printf("Divisible by 5 but not by 3\n");
    else
        printf("Divisible by none\n");
}
