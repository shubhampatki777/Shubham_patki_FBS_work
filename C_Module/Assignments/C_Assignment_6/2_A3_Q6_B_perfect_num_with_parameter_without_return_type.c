#include<stdio.h>

void checkPerfect(int n);   // Function declaration

void main() {
    checkPerfect(6);   // Function call with argument
}

void checkPerfect(int n) {  // Function definition
    int i, sum = 0;

    for(i = 1; i < n; i++) {
        if(n % i == 0)
            sum = sum + i;
    }

    if(sum == n)
        printf("%d is Perfect\n", n);
    else
        printf("%d is Not Perfect\n", n);
}
