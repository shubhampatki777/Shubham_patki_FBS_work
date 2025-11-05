#include<stdio.h>

void checkStrong();   // Function declaration

void main() {
    checkStrong();    // Function call
}

void checkStrong() {  // Function definition
    int n = 145, temp, rem, i, fact, sum = 0;
    temp = n;

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
