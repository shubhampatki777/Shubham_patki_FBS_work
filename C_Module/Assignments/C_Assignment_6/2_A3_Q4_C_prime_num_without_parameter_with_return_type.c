#include<stdio.h>

int checkPrime();   // Function declaration

void main() {
    int result = checkPrime();   // Function call
    if(result == 1)
        printf("Prime\n");
    else
        printf("Not Prime\n");
}

int checkPrime() {  // Function definition
    int n = 23, i, flag = 0;

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
