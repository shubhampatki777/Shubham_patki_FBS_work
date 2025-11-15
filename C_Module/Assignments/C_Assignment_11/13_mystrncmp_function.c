#include<stdio.h>

int mystrncmp(const char *s1, const char *s2, int n) {
    while(n-- && *s1 && (*s1 == *s2)) { 
	s1++; 
	s2++; 
	}
    if(n < 0) 
	return 0;
    return *s1 - *s2;
}
int main() {
    printf("Result = %d", mystrncmp("abcd", "abcz", 3));
    return 0;
}
