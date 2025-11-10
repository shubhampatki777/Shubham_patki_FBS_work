#include<stdio.h>

//function declaration
void evenOdd(int *num);

void main() {
    int n = 9;
    evenOdd(&n);  //function call
}
//function definition
void evenOdd(int *num) {
    if(*num % 2 == 0)
        printf("%d is Even\n", *num);
    else
        printf("%d is Odd\n", *num);
}
