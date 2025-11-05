#include<stdio.h>

int checkPrime(int n);   // Function declaration

void main() {
    int result = checkPrime(31);   // Function call
    if(result == 1)
        printf("Prime\n");
    else
        printf("Not Prime\n");
}

int checkPrime(int n) {  // Function definition
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
        return 1;  
    else
        return 0; 
}
