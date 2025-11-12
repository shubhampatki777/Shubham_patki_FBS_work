#include<stdio.h>

//function declaration
void checkVowel(char ch[], int size);

int main() {
    char letters[] = {'A', 'b', 'E', 'k', 'u'}; 
    int size = sizeof(letters) / sizeof(letters[0]); 

    checkVowel(letters, size);  //function call (passing array to function)
	return 0;
}
//function definition
void checkVowel(char ch[], int size) {
    for(int i = 0; i < size; i++) {
        if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
            printf("%c is Vowel\n", ch[i]);
        else
            printf("%c is Consonant\n", ch[i]);
    }
}
