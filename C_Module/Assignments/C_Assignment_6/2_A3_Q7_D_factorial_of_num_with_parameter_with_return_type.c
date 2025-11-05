#include<stdio.h>

long factorial(int n);   // Function declaration

void main() {
    long result = factorial(8);   // Function call
    printf("Factorial = %ld\n", result);
}

long factorial(int n) {  // Function definition
    int i;
    long fact = 1;

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact; 
}
