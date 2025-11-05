#include<stdio.h>

long factorial();   // Function declaration

void main() {
    long result = factorial();   // Function call
    printf("Factorial = %ld\n", result);
}

long factorial() {  // Function definition
    int n = 6, i;
    long fact = 1;

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}
