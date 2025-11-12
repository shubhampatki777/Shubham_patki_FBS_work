#include<stdio.h>
#include<string.h>
int main() {
    char str[] = "Hello Firstbit";
    printf("Last occurrence = %s", strrchr(str, 'l'));
    return 0;
}
