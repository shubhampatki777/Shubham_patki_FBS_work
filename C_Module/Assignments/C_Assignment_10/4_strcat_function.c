#include<stdio.h>
#include<string.h>
int main() {
    char a[50] = "Hello ", b[] = "Firstbit";
    strcat(a, b);
    printf("Result = %s", a);
    return 0;
}
