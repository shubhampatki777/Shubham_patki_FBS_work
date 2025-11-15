#include<stdio.h>

int mystrcmp(const char *s1, const char *s2) {
    while(*s1 && (*s1 == *s2)) { 
	s1++; 
	s2++; 
	}
    return *s1 - *s2;
}
int main() {
    printf("Result = %d", mystrcmp("Hello", "Hello"));
    return 0;
}
