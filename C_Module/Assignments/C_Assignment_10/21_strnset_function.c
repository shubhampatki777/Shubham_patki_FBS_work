#include<stdio.h>
#include<string.h>
int main() {
    char str[] = "Hello";
    memset(str, 'A', 3);
    printf("After set = %s", str);
    return 0;
}
