#include<stdio.h>

//function declaration (using pointer)
void checkPrime(int *n);

void main() {
    int num = 17;
    checkPrime(&num);   //function call with address of variable
}

void checkPrime(int *n) { //function definition
    int i, flag = 0;

    if(*n <= 1)
        flag = 1;
    else {
        for(i = 2; i <= *n / 2; i++) {
            if(*n % i == 0) {
                flag = 1;
                break;
            }
        }
    }
	if(flag == 0)
        printf("%d is Prime\n", *n);
    else
        printf("%d is Not Prime\n", *n);
}
