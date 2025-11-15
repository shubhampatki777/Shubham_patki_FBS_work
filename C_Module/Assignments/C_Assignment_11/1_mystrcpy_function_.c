#include<stdio.h>

void mystrcpy(char *dest, const char *src) {
    while((*dest++ = *src++));
}
int main() {
    char src[] = "Firstbit", dest[50];
    mystrcpy(dest, src);
    printf("Copied String = %s", dest);
    return 0;
}
