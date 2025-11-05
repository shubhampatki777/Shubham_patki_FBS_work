#include<stdio.h>

int checkCase(char ch);   // Function declaration

void main() {
    char ch = '#';
    int result = checkCase(ch);   // Function call
    if(result == 1)
        printf("%c is Uppercase\n", ch);
    else if(result == 2)
        printf("%c is Lowercase\n", ch);
    else
        printf("%c is not an Alphabet\n", ch);
}

int checkCase(char ch) {  // Function definition
    if(ch >= 'A' && ch <= 'Z')
        return 1;   
    else if(ch >= 'a' && ch <= 'z')
        return 2;   
    else
        return 0;   
}
