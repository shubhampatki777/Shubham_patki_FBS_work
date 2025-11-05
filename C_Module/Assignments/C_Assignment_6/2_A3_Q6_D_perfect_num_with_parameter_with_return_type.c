#include<stdio.h>

int checkPerfect(int n);   // Function declaration

void main() {
    int result = checkPerfect(12);   // Function call
    if(result == 1)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");
}

int checkPerfect(int n) {  // Function definition
    int i, sum = 0;

    for(i = 1; i < n; i++) {
        if(n % i == 0)
            sum = sum + i;
    }

    if(sum == n)
        return 1;  
    else
        return 0; 
}
