#include<stdio.h>

//function declaration (with pointer parameter)
void sumFirstLast(int *n);

void main() {
    int num = 5678;
    sumFirstLast(&num);   //function call with address of variable 'num'
}

//function definition
void sumFirstLast(int *n) {
    int first, last, temp;
    temp = *n;   
	
	last = temp % 10;
    while(temp >= 10) {
        temp = temp / 10;
    }
    first = temp;
	printf("Sum of first and last digit = %d\n", first + last);
}
