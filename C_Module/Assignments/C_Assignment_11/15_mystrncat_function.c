#include<stdio.h>

void mystrncat(char *dest, const char *src, int n) {
    while(*dest) 
	dest++;
    while(n-- && *src)
    *dest++ = *src++;
    *dest = '\0';
}
int main() {
    char a[50] = "Hi ", b[] = "Firstbit";
    mystrncat(a, b, 3);
    printf("Result = %s", a);
    return 0;
}
