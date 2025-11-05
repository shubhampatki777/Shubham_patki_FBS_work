#include<stdio.h>

int multiplicationTable(int n);   // Function declaration

void main() {
    int last = multiplicationTable(9);   // Function call
    printf("Last value = %d\n", last);
}

int multiplicationTable(int n) {  // Function definition
    int i;
    for(i = 1; i <= 10; i++) {
        printf("%d \n", n * i);
    }
    return n * i - n;  
}
