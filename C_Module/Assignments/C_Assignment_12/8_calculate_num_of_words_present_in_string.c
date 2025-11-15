//WAP to Calculate the Number of Words Present in a String.
#include<stdio.h>

int main() {
    char str[100];
    int i, count=1;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != '\0')
            count++;
    }
	printf("Total words: %d", count);
    return 0;
}
