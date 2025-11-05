#include<stdio.h>

int printNumbers(int n);   // Function declaration

void main() {
    int last = printNumbers(12);   // Function call
    printf("Last number printed = %d\n", last);
}

int printNumbers(int n) {  // Function definition
    int i;
    for(i = 1; i <= n; i++) {
        printf("%d \n", i);
    }
    return i - 1;  
}
