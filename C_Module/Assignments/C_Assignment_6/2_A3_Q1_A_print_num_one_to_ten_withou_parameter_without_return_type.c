#include<stdio.h>

void printNumbers();   // Function declaration

void main() {
    printNumbers();    // Function call
}

void printNumbers() {  // Function definition
    int i;
    for(i = 1; i <= 10; i++) {
        printf("%d \n", i);
    }
}
