#include<stdio.h>

//function declaration using pointer
void checkStrong(int *n);

void main() {
    int num = 145;
    checkStrong(&num);   //function call with address of variable
}

//function definition
void checkStrong(int *n) {
    int temp = *n, rem, i, fact, sum = 0;
    int num = *n;  

    while(num > 0) {
        rem = num % 10;
        fact = 1;
        for(i = 1; i <= rem; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
	if(sum == temp)
        printf("%d is Strong\n", *n);
    else
        printf("%d is Not Strong\n", *n);
}
