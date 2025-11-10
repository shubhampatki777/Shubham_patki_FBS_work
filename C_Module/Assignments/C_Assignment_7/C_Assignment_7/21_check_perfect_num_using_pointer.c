#include<stdio.h>

//function declaration
void checkPerfect(int *n);

void main() {
    int num = 6;
    checkPerfect(&num);   //function call with address of variable
}

//function definition
void checkPerfect(int *n) {
    int i, sum = 0;

    for(i = 1; i < *n; i++) {
        if(*n % i == 0)
            sum = sum + i;
    }
	if(sum == *n)
        printf("%d is Perfect\n", *n);
    else
        printf("%d is Not Perfect\n", *n);
}
