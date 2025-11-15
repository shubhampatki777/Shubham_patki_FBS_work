#include<stdio.h>

void mystrupper(char *str) {
    while(*str) {
        *str = toupper(*str);
        str++;
    }
}
int main() {
    char str[] = "firstbit solutions";
    mystrupper(str);
    printf("Uppercase = %s", str);
    return 0;
}
