#include<stdio.h>
#include<string.h>
int main() {
    char a[50] = "Hello ", b[] = "Firstbit";
    strncat(a, b, 3);
    printf("Result = %s", a);
    return 0;
}
