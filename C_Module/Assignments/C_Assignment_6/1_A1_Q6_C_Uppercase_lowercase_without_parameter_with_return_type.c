#include<stdio.h>

int checkCase();   // Function declaration

void main() {
    int result = checkCase();   // Function call
    if(result == 1)
        printf("Character is Uppercase\n");
    else if(result == 2)
        printf("Character is Lowercase\n");
    else
        printf("Character is not an Alphabet\n");
}

int checkCase() {  // Function definition
    char ch = 'z';

    if(ch >= 'A' && ch <= 'Z')
        return 1;   
    else if(ch >= 'a' && ch <= 'z')
        return 2;   
    else
        return 0;   
}
