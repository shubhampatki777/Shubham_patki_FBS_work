#include<stdio.h>
#include<math.h>

//function declaration using pointer
void printArmstrong(int *n);

void main() {
    int limit = 500;
    printArmstrong(&limit);   //function call with address of variable
}

//function definition
void printArmstrong(int *n) {
    int num, temp, rem, digits, sum;
	printf("Armstrong numbers from 1 to %d are:\n", *n);

    for(num = 1; num <= *n; num++) {
        temp = num;
        sum = 0;
        digits = 0;

        int t = num;
        while(t != 0) {
            t /= 10;
            digits++;
        }
		t = num;
        while(t != 0) {
            rem = t % 10;
            sum += pow(rem, digits);
            t /= 10;
        }
		if(sum == num)
            printf("%d ", num);
    }
    printf("\n");
}
