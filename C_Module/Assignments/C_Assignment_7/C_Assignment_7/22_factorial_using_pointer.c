#include<stdio.h>

//function declaration using pointer
void factorial(int *n);

void main() {
    int num = 7;
    factorial(&num);   //function call with address of variable
}

//function definition
void factorial(int *n) {
    int i;
    long fact = 1;

    for(i = 1; i <= *n; i++) {
        fact = fact * i;
    }
	printf("Factorial of %d = %ld\n", *n, fact);
}
