#include<stdio.h>

int printNumbers();   // Function declaration

void main() {
    int last = printNumbers();   // Function call
    printf("Last number printed = %d\n", last);
}

int printNumbers() {  // Function definition
    int i;
    for(i = 1; i <= 10; i++) {
        printf("%d \n", i);
    }
    return i - 1;  
}
