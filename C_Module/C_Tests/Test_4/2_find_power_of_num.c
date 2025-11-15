/*Que 2: Write a program to find power of any number.
Eg. 2^4 = 16.*/
#include<stdio.h>

int main() {
    int base, exp, i;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    for(i = 1; i <= exp; i++) {
        result = result * base;
    }
	printf("%d^%d = %lld\n", base, exp, result);
	return 0;
}
