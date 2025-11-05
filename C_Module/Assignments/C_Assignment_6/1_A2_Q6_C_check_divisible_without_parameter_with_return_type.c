#include<stdio.h>

int checkDivisible();   // Function declaration

void main() {
    int result = checkDivisible();   // Function call
    if(result == 1)
        printf("Divisible by both 3 and 5\n");
    else if(result == 2)
        printf("Divisible by 5 but not by 3\n");
    else
        printf("Divisible by none\n");
}

int checkDivisible() {  // Function definition
    int num = 18;

    if(num % 3 == 0 && num % 5 == 0)
        return 1;
    else if(num % 5 == 0)
        return 2;
    else
        return 3;
}
