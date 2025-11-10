#include<stdio.h>

//function declaration 
void checkVowel(char *ch);

void main() {
    char c = 'E';
    checkVowel(&c);  //function call
}

//function definition
void checkVowel(char *ch) {
    if(*ch == 'a' || *ch == 'e' || *ch == 'i' || *ch == 'o' || *ch == 'u' || *ch == 'A' || *ch == 'E' || *ch == 'I' || *ch == 'O' || *ch == 'U')
        printf("%c is Vowel\n", *ch);
    else
        printf("%c is Consonant\n", *ch);
}
