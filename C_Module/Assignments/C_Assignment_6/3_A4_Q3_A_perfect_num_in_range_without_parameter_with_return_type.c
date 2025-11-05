#include<stdio.h>

void printPerfect();  // Function declaration

void main() {
    printPerfect();   // Function call
}

void printPerfect() {  // Function definition
    int n = 100, i, j, sum;

    printf("Perfect numbers from 1 to %d are:\n", n);

    for(i = 1; i <= n; i++) {
        sum = 0;
        for(j = 1; j < i; j++) {
            if(i % j == 0) 
                sum += j;
        }
        if(sum == i)
            printf("%d ", i);
    }
    printf("\n");
}
