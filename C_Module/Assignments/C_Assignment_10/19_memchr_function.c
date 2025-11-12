#include<stdio.h>
#include<string.h>
int main() {
    char str[] = "Hello";
    char *p = memchr(str, 'l', 5);
    if(p) printf("Found at: %s", p);
    else printf("Not found");
    return 0;
}
