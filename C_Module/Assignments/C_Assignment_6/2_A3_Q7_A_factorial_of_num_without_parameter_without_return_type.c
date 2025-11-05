#include<stdio.h>

void factorial();   // Function declaration

void main() {
    factorial();    // Function call
}

void factorial() {  // Function definition
    int n = 5, i;
    long fact = 1;

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %ld\n", n, fact);
}
