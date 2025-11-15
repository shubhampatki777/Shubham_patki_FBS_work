#include<stdio.h>

int mystrncasecmp(const char *s1, const char *s2, int n) {
    while(n-- && *s1 && (tolower(*s1) == tolower(*s2))) {
    s1++; 
	s2++;
    }
    if(n < 0) 
	return 0;
    return tolower(*s1) - tolower(*s2);
}
int main() {
    printf("Result = %d", mystrncasecmp("FIRSTBIT", "firstbit", 3));
    return 0;
}
