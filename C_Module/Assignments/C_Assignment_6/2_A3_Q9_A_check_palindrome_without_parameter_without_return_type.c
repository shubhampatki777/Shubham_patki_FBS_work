#include<stdio.h>

void checkPalindrome();   // Function declaration

void main() {
    checkPalindrome();    // Function call
}

void checkPalindrome() {  // Function definition
    int n = 121, rev = 0, rem, temp;
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
