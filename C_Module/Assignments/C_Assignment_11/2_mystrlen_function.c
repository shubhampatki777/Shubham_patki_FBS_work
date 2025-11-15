#include<stdio.h>

int mystrlen(const char *str) {
    int len = 0;
    while(*str++) 
	len++;
    return len;
}
int main() {
    char str[] = "Programming";
    printf("Length = %d", mystrlen(str));
    return 0;
}
