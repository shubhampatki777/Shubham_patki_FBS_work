#include<stdio.h>

int checkVowel();   // Function declaration

void main() {
    int result = checkVowel();    // Function call
    if(result == 1)
        printf("Character is Vowel\n");
    else
        printf("Character is Consonant\n");
}

int checkVowel() {  // Function definition
    char ch = 'u';

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;  
    else
        return 0;   
}
