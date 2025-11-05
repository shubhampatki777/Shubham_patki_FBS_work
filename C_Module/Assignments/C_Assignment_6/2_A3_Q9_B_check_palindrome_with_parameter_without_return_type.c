#include<stdio.h>

void checkPalindrome(int n);   // Function declaration

void main() {
    checkPalindrome(454);   // Function call with argument
}

void checkPalindrome(int n) {  // Function definition
    int rev = 0, rem, temp;
    temp = n;

    while(n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(rev == temp)
        printf("%d is Palindrome\n", temp);
    else
        printf("%d is Not Palindrome\n", temp);
}
