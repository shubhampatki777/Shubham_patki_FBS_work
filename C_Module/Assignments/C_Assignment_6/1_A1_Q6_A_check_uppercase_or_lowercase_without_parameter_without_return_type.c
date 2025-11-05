#include<stdio.h>

void checkCase();   // Function declaration

void main() {
    checkCase();    // Function call
}

void checkCase() {  // Function definition
    char ch = 'B';

    if(ch >= 'A' && ch <= 'Z')
        printf("%c is Uppercase\n", ch);
    else if(ch >= 'a' && ch <= 'z')
        printf("%c is Lowercase\n", ch);
    else
        printf("%c is not an Alphabet\n", ch);
}
