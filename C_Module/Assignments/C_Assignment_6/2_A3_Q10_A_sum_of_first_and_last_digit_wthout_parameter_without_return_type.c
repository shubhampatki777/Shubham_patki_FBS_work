#include<stdio.h>

void sumFirstLast();   // Function declaration

void main() {
    sumFirstLast();    // Function call
}

void sumFirstLast() {  // Function definition
    int n = 2345, first, last, temp;
    temp = n;

    last = temp % 10;
    while(temp >= 10) {
        temp = temp / 10;
    }
    first = temp;

    printf("Sum of first and last digit = %d\n", first + last);
}
