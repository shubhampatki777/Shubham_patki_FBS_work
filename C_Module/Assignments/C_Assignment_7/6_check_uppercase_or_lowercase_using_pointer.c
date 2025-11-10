#include<stdio.h>

//function declaration
void checkCase(char *ch);

void main() {
    char c = 'g';
    checkCase(&c);   //function call
}

//function definition
void checkCase(char *ch) {
    if(*ch >= 'A' && *ch <= 'Z')
        printf("%c is Uppercase\n", *ch);
    else if(*ch >= 'a' && *ch <= 'z')
        printf("%c is Lowercase\n", *ch);
    else
        printf("%c is not an Alphabet\n", *ch);
}
