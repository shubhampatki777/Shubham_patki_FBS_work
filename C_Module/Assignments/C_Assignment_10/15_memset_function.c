#include<stdio.h>
#include<string.h>
int main() {
    char str[20];
    memset(str, '*', 5);
    str[5] = '\0';
    printf("Result = %s", str);
    return 0;
}
