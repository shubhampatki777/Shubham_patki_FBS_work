#include<stdio.h>

void mystrcat(char *dest, const char *src) {
    while(*dest) 
	dest++;
    while((*dest++ = *src++));
}
int main() {
    char a[100] = "Firstbit ", b[] = "Solutions";
    mystrcat(a, b);
    printf("Concatenated = %s", a);
    return 0;
}
