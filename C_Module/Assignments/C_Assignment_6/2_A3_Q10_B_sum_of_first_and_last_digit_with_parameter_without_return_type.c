#include<stdio.h>

void sumFirstLast(int n);   // Function declaration

void main() {
    sumFirstLast(5678);   // Function call with argument
}

void sumFirstLast(int n) {  // Function definition
    int first, last, temp;
    temp = n;

    last = temp % 10;
    while(temp >= 10) {
        temp = temp / 10;
    }
    first = temp;

    printf("Sum of first and last digit = %d\n", first + last);
}
