#include<stdio.h>

void mystrlower(char *str) {
    while(*str) {
        *str = tolower(*str);
        str++;
    }
}
int main() {
    char str[] = "FIRSTBIT SOLUTIONS";
    mystrlower(str);
    printf("Lowercase = %s", str);
    return 0;
}
