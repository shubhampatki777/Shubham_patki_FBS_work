#include<stdio.h>

int checkArmstrong();   // Function declaration

void main() {
    int result = checkArmstrong();   // Function call
    if(result == 1)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
}

int checkArmstrong() {  // Function definition
    int n = 153, temp, rem, sum = 0;
    temp = n;

    while(n > 0) {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if(sum == temp)
        return 1;  
    else
        return 0;  
}
