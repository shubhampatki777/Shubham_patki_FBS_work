#include<stdio.h>

int checkStrong(int n);   // Function declaration

void main() {
    int result = checkStrong(40585);   // Function call
    if(result == 1)
        printf("Strong\n");
    else
        printf("Not Strong\n");
}

int checkStrong(int n) {  // Function definition
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
        return 1;  
    else
        return 0;  
}
