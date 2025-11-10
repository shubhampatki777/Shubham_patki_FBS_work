#include<stdio.h>

//function declaration using pointer
void checkPalindrome(int *n);

void main() {
    int num = 454;
    checkPalindrome(&num);   //function call with address of variable
}

//function definition
void checkPalindrome(int *n) {
    int rev = 0, rem, temp;
    temp = *n; 

    int num = *n; 
    while(num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
	if(rev == temp)
        printf("%d is Palindrome\n", *n);
    else
        printf("%d is Not Palindrome\n", *n);
}
