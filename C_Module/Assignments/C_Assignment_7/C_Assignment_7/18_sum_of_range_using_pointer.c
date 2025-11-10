#include<stdio.h>

//function declaration (with pointer parameters)
void sumRange(int *start, int *end);

void main() {
    int s = 5, e = 15;
    sumRange(&s, &e);   //function call with address of variables
}

//function definition
void sumRange(int *start, int *end) {
    int sum = 0, i;

    for(i = *start; i <= *end; i++) {   // Access values using pointers
        sum = sum + i;
    }
	printf("Sum = %d\n", sum);
}
