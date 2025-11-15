#include<stdio.h>

char* mystrstr(const char *str, const char *substr) {
    while(*str) {
        const char *s = str;
        const char *sub = substr;
        while(*s && *sub && (*s == *sub)) {
		s++; 
		sub++; 
		}
        if(!*sub) 
			return (char*)str;
        str++;
    }
    return NULL;
}
int main() {
    char s[] = "Firstbit Solutions";
    char *p = mystrstr(s, "tion");
    if(p)
		 printf("Found at: %s", p);
    else
		 printf("Not found");
    return 0;
}
