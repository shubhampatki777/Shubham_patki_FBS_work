#include<stdio.h>
#include<string.h>
int main() {
    char a[] = "ABC", b[] = "ABD";
    printf("Result = %d", memcmp(a, b, 3));
    return 0;
}
