#include<stdio.h>
#include<string.h>
int main() {
    char src[] = "Firstbit", dest[20];
    memcpy(dest, src, strlen(src)+1);
    printf("Copied = %s", dest);
    return 0;
}
