#include<stdio.h>

//function declaration using pointer
void checkArmstrong(int *n);

void main() {
    int num = 371;
    checkArmstrong(&num);   //function call with address of variable
}

//function definition
void checkArmstrong(int *n) {
    int temp, rem, sum = 0;
    temp = *n; 

    int num = *n;  
    while(num > 0) {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
	if(sum == temp)
        printf("%d is Armstrong\n", *n);
    else
        printf("%d is Not Armstrong\n", *n);
}
