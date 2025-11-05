#include<stdio.h>

void checkCase(char ch);   // Function declaration

void main() {
    checkCase('g');        // Function call with argument
}

void checkCase(char ch) {  // Function definition
    if(ch >= 'A' && ch <= 'Z')
        printf("%c is Uppercase\n", ch);
    else if(ch >= 'a' && ch <= 'z')
        printf("%c is Lowercase\n", ch);
    else
        printf("%c is not an Alphabet\n", ch);
}
