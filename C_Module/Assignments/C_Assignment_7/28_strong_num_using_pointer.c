#include<stdio.h>

//function declarations using pointers
int fact(int *n);
void printStrong(int *n);

void main() {
    int limit = 500;
    printStrong(&limit);   //function call with address
}

//function to calculate factorial using pointer
int fact(int *n) {
    int i, f = 1;
    for(i = 1; i <= *n; i++)
        f *= i;
    return f;
}

//function to print Strong numbers using pointer
void printStrong(int *n) {
    int num, rem, sum, temp;
	printf("Strong numbers from 1 to %d are:\n", *n);

    for(num = 1; num <= *n; num++) {
        temp = num;
        sum = 0;
        while(temp != 0) {
            rem = temp % 10;
            sum += fact(&rem); 
            temp /= 10;
        }
        if(sum == num)
            printf("%d ", num);
    }
    printf("\n");
}
