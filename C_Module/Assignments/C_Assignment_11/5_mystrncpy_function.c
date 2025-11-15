#include<stdio.h>

void mystrncpy(char *dest, const char *src, int n) {
    while(n-- && (*dest++ = *src++));
    *dest = '\0';
}
int main() {
    char s1[] = "Firstbit", s2[50];
    mystrncpy(s2, s1, 5);
    printf("Copied = %s", s2);
    return 0;
}
