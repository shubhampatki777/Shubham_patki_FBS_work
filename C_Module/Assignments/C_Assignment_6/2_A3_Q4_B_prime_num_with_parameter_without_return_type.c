#include<stdio.h>

void checkPrime(int n);   // Function declaration

void main() {
    checkPrime(17);   // Function call with argument
}

void checkPrime(int n) {  // Function definition
    int i, flag = 0;

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
