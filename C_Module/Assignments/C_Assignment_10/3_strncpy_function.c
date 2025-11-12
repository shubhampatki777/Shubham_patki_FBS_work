#include<stdio.h>
#include<string.h>
int main() {
    char src[] = "Programming", dest[50];
    strncpy(dest, src, 5);
    dest[5] = '\0';
    printf("Result = %s", dest);
    return 0;
}
