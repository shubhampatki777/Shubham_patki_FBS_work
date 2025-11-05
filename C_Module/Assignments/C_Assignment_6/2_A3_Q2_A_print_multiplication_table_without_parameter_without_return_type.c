#include<stdio.h>

void multiplicationTable();   // Function declaration

void main() {
    multiplicationTable();    // Function call
}

void multiplicationTable() {  // Function definition
    int n = 5, i;
    for(i = 1; i <= 10; i++) {
        printf("%d \n", n * i);
    }
}
