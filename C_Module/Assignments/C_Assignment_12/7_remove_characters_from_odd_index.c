//WAP to Remove the Characters of Odd Index Values in a String.
#include<stdio.h>

int main() {
    char str[100];
    int i, j=0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(i % 2 == 0) {
            str[j++] = str[i];
        }
    }
	str[j] = '\0';
    printf("After removing odd index: %s", str);
    return 0;
}
