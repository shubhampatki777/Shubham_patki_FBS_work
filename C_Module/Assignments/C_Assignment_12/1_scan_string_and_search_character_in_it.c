//Write a program to scan string from user then scan a single character and search it in a accepted string.
#include<stdio.h>

int main() {
    char str[100], ch;
    int i,flag = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to search: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            flag = 1;
            break;
        }
    }
	if(flag == 1)
        printf("Character found!\n");
    else
        printf("Character not found!\n");
	return 0;
}
