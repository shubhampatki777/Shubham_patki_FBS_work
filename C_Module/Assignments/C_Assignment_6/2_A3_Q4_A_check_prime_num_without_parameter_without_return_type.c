#include<stdio.h>

void checkPrime();   // Function declaration

void main() {
    checkPrime();    // Function call
}

void checkPrime() {  // Function definition
    int n = 29, i, flag = 0;

    if(n <= 1)
        flag = 1;
    else {
        for(i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
        printf("%d is Prime\n", n);
    else
        printf("%d is Not Prime\n", n);
}
