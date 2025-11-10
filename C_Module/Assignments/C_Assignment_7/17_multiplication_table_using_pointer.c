#include<stdio.h>

//function declaration (with pointer parameter)
void multiplicationTable(int *n);

void main() {
    int num = 7;
    multiplicationTable(&num);   //function call with address of variable 'num'
}

//function definition
void multiplicationTable(int *n) {
    int i;
    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", *n, i, (*n) * i);   //access value using pointer
    }
}
