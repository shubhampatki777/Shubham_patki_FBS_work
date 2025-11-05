#include<stdio.h>

int checkPalindrome();   // Function declaration

void main() {
    int result = checkPalindrome();   // Function call
    if(result == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}

int checkPalindrome() {  // Function definition
    int n = 232, rev = 0, rem, temp;
    temp = n;

    while(n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(rev == temp)
        return 1;  
    else
        return 0;  
}
