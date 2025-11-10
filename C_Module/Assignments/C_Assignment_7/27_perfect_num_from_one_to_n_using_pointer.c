#include<stdio.h>

//function declaration using pointer
void printPerfect(int *n);

void main() {
    int limit = 100;
    printPerfect(&limit);   //function call with address of variable
}

//function definition
void printPerfect(int *n) {
    int i, j, sum;
	printf("Perfect numbers from 1 to %d are:\n", *n);

    for(i = 1; i <= *n; i++) {
        sum = 0;

        for(j = 1; j < i; j++) {
            if(i % j == 0)
                sum += j;
        }
		if(sum == i)
            printf("%d ", i);
    }
    printf("\n");
}
