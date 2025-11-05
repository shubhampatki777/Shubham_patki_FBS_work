#include<stdio.h>

void checkStrong(int n);   // Function declaration

void main() {
    checkStrong(145);   // Function call with argument
}

void checkStrong(int n) {  // Function definition
    int temp = n, rem, i, fact, sum = 0;

    while(n > 0) {
        rem = n % 10;
        fact = 1;
        for(i = 1; i <= rem; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }

    if(sum == temp)
        printf("%d is Strong\n", temp);
    else
        printf("%d is Not Strong\n", temp);
}
