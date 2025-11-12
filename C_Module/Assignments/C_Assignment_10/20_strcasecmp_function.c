#include<stdio.h>
#include<string.h> 
int main() {
    char a[] = "HELLO", b[] = "hello";
    printf("Result = %d", strcasecmp(a, b));
    return 0;
}
