#include<stdio.h>

int multiplicationTable();   // Function declaration

void main() {
    int last = multiplicationTable();   // Function call
    printf("Last value = %d\n", last);
}

int multiplicationTable() {  // Function definition
    int n = 6, i;
    for(i = 1; i <= 10; i++) {
        printf("%d \n", n * i);
    }
    return n * i - n;  
}
