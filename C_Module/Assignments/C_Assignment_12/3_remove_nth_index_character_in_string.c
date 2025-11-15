//WAP to Remove the nth Index Character from a Non-Empty String.
#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int index, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter index to remove: ");
    scanf("%d", &index);

    for(i = index; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }
	printf("Result string: %s", str);
    return 0;
}
