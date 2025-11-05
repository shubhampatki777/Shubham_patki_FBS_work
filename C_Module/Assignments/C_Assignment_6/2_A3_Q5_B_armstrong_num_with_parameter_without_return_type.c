#include<stdio.h>

void checkArmstrong(int n);   // Function declaration

void main() {
    checkArmstrong(371);   // Function call with argument
}

void checkArmstrong(int n) {  // Function definition
    int temp, rem, sum = 0;
    temp = n;

    while(n > 0) {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if(sum == temp)
        printf("%d is Armstrong\n", temp);
    else
        printf("%d is Not Armstrong\n", temp);
}
