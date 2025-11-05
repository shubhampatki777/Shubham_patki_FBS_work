#include<stdio.h>

void checkArmstrong();   // Function declaration

void main() {
    checkArmstrong();    // Function call
}

void checkArmstrong() {  // Function definition
    int n = 153, temp, rem, sum = 0;
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
