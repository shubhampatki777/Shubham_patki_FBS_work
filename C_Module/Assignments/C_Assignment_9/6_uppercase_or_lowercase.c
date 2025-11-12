#include<stdio.h>

//function declaration
void checkCase(char ch[], int size);

int main() {
    char letters[] = {'A', 'g', 'Z', 'm', '#'};   
    int size = sizeof(letters) / sizeof(letters[0]); 

    checkCase(letters, size);  //function call (passing array to function)
	return 0;
}
//function definition
void checkCase(char ch[], int size) {
    for(int i = 0; i < size; i++) {
        if(ch[i] >= 'A' && ch[i] <= 'Z')
            printf("%c is Uppercase\n", ch[i]);
        else if(ch[i] >= 'a' && ch[i] <= 'z')
            printf("%c is Lowercase\n", ch[i]);
        else
            printf("%c is not an Alphabet\n", ch[i]);
    }
}
