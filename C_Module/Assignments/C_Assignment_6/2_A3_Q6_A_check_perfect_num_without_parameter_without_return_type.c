#include<stdio.h>

void checkPerfect();   // Function declaration

void main() {
    checkPerfect();    // Function call
}

void checkPerfect() {  // Function definition
    int n = 28, i, sum = 0;

    for(i = 1; i < n; i++) {
        if(n % i == 0)
            sum = sum + i;
    }

    if(sum == n)
        printf("%d is Perfect\n", n);
    else
        printf("%d is Not Perfect\n", n);
}
