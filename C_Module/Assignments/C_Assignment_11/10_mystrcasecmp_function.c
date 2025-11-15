#include<stdio.h>

int mystrcasecmp(const char *s1, const char *s2) {
    while(*s1 && tolower(*s1) == tolower(*s2)) {
	s1++; 
	s2++; 
	}
    return tolower(*s1) - tolower(*s2);
}
int main() {
    printf("Result = %d", mystrcasecmp("HELLO", "hello"));
    return 0;
}
