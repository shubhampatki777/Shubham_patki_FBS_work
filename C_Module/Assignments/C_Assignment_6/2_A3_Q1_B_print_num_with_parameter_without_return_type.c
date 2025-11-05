#include<stdio.h>

void printNumbers(int n);   // Function declaration

void main() {
    printNumbers(15);   // Function call with argument
}

void printNumbers(int n) {  // Function definition
    int i;
    for(i = 1; i <= n; i++) {
        printf("%d \n", i);
    }
}
