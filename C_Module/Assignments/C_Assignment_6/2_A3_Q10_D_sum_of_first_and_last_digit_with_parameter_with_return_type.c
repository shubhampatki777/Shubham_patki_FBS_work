#include<stdio.h>

int sumFirstLast(int n);   // Function declaration

void main() {
    int result = sumFirstLast(9876);   // Function call
    printf("Sum of first and last digit = %d\n", result);
}

int sumFirstLast(int n) {  // Function definition
    int first, last, temp;
    temp = n;

    last = temp % 10;
    while(temp >= 10) {
        temp = temp / 10;
    }
    first = temp;

    return first + last;
}
