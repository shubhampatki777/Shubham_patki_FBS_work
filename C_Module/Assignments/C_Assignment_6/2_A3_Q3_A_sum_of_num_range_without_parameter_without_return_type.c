#include<stdio.h>

void sumRange();   // Function declaration

void main() {
    sumRange();    // Function call
}

void sumRange() {  // Function definition
    int start = 1, end = 10, sum = 0, i;
    for(i = start; i <= end; i++) {
        sum = sum + i;
    }
    printf("Sum = %d\n", sum);
}
