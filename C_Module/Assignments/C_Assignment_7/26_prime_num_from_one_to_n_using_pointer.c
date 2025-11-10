#include<stdio.h>

//function declaration using pointer
void printPrimes(int *n);

void main() {
    int limit = 50;
    printPrimes(&limit);   //function call with address of variable
}

//function definition
void printPrimes(int *n) {
    int i, j, flag;
	printf("Prime numbers from 1 to %d are:\n", *n);

    for(i = 2; i <= *n; i++) {
        flag = 0;

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
		if(flag == 0)
            printf("%d ", i);
    }
    printf("\n");
}
