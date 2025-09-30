#include<stdio.h>
int main() {
	char ch = 'a';
	
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == '0' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		printf("%c is Vowel\n", ch);
		else 
			printf("%c is Consonant\n", ch);
			
			return 0;
}