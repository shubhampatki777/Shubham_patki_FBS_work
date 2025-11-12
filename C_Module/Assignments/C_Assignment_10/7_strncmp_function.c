#include<stdio.h>
#include<string.h>
int main() {
    char a[] = "Hello", b[] = "Firstbit";
    printf("Result = %d", strncmp(a, b, 3));
    return 0;
}
