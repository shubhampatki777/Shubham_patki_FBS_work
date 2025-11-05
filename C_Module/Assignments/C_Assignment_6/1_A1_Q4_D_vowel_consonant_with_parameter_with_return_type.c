#include<stdio.h>

int checkVowel(char ch);   // Function declaration

void main() {
    char ch = 'b';
    int result = checkVowel(ch);   // Function call
    if(result == 1)
        printf("%c is Vowel\n", ch);
    else
        printf("%c is Consonant\n", ch);
}

int checkVowel(char ch) {  // Function definition
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    else
        return 0;
}
