#include<stdio.h>

void multiplicationTable(int n);   // Function declaration

void main() {
    multiplicationTable(7);   // Function call with argument
}

void multiplicationTable(int n) {  // Function definition
    int i;
    for(i = 1; i <= 10; i++) {
        printf("%d \n", n * i);
    }
}
