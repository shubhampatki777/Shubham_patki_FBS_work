#include<stdio.h>

int checkPerfect();   // Function declaration

void main() {
    int result = checkPerfect();   // Function call
    if(result == 1)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");
}

int checkPerfect() {  // Function definition
    int n = 28, i, sum = 0;

    for(i = 1; i < n; i++) {
        if(n % i == 0)
            sum = sum + i;
    }

    if(sum == n)
        return 1;  
    else
        return 0;  
}
