#include<stdio.h>
#include<math.h>

void printArmstrong();  // Function declaration

void main() {
    printArmstrong();   // Function call
}

void printArmstrong() {  // Function definition
    int n = 500, num, temp, rem, digits, sum;

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for(num = 1; num <= n; num++) {
        temp = num;
        sum = 0;
        digits = 0;

        int t = num;
        while(t != 0) {
            t /= 10;
            digits++;
        }

        t = num;
        while(t != 0) {
            rem = t % 10;
            sum += pow(rem, digits);
            t /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }
    printf("\n");
}
