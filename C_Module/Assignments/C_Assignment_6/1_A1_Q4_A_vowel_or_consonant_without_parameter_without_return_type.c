#include<stdio.h>
void checkVowel(); //function declaration 

void main() {
	checkVowel(); //function call
}

void checkVowel() { //function definition
		char ch ='a';
		
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
			printf("%c is Vowel\n", ch);
			else 
				printf("%c is Consonant\n", ch);
	
}