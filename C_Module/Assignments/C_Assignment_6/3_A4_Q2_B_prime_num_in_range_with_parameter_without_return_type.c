#include<stdio.h>

void printPrimes(int n);  // Function declaration

void main() {
    printPrimes(50);   // Function call with argument
}

void printPrimes(int n) {  // Function definition
    int i, j, flag;

    printf("Prime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++) {
        flag = 0;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%d ", i);
    }
    printf("\n");
}
