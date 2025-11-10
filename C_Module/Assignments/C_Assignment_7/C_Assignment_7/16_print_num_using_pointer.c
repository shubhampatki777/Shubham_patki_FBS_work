#include<stdio.h>

//function declaration (with pointer parameter)
void printNumbers(int *n);

void main() {
    int num = 15;
    printNumbers(&num);   //function call with address of variable 'num'
}

//function definition
void printNumbers(int *n) {
    int i;
    for(i = 1; i <= *n; i++) {   
        printf("%d \n", i);
    }
}
