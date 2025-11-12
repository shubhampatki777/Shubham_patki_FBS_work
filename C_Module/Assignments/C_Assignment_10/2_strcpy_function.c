#include<stdio.h>
#include<string.h>
int main() {
    char src[] = "Firstbit Solutions", dest[50];
    strcpy(dest, src);
    printf("Copied String = %s", dest);
    return 0;
}
