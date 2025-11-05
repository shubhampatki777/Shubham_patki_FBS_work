#include<stdio.h>

int sumFirstLast();   // Function declaration

void main() {
    int result = sumFirstLast();   // Function call
    printf("Sum of first and last digit = %d\n", result);
}

int sumFirstLast() {  // Function definition
    int n = 3456, first, last, temp;
    temp = n;

    last = temp % 10;
    while(temp >= 10) {
        temp = temp / 10;
    }
    first = temp;

    return first + last;
}
