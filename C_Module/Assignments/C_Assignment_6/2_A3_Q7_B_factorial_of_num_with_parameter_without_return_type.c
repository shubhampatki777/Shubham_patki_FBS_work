#include<stdio.h>

void factorial(int n);   // Function declaration

void main() {
    factorial(7);   // Function call with argument
}

void factorial(int n) {  // Function definition
    int i;
    long fact = 1;

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %ld\n", n, fact);
}
