#include<stdio.h>
#include<string.h>
int main() {
    char str[] = "abcdef";
    memmove(str+2, str, 4);
    printf("After memmove = %s", str);
    return 0;
}
