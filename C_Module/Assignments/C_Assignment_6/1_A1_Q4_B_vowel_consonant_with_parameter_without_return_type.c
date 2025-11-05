#include<stdio.h>

void checkVowel(char ch);   // Function declaration

void main() {
    checkVowel('E');        // Function Call with argument
}

void checkVowel(char ch) {  // Function definition
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("%c is Vowel\n", ch);
    else
        printf("%c is Consonant\n", ch);
}
