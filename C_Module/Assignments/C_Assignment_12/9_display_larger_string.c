//WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions.
#include<stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
        i++;
    }
	if(str1[i] > str2[i])
        printf("Larger string: %s", str1);
    else if(str2[i] > str1[i])
        printf("Larger string: %s", str2);
    else
        printf("Both are equal");

    return 0;
}
