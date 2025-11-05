#include<stdio.h>

void sumRange(int start, int end);   // Function declaration

void main() {
    sumRange(5, 15);   // Function call with arguments
}

void sumRange(int start, int end) {  // Function definition
    int sum = 0, i;
    for(i = start; i <= end; i++) {
        sum = sum + i;
    }
    printf("Sum = %d\n", sum);
}
