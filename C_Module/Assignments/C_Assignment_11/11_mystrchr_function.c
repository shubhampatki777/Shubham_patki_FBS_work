#include<stdio.h>

char* mystrchr(const char *str, char ch) {
    while(*str) {
        if(*str == ch) 
			return (char*)str;
        str++;
    }
    return NULL;
}
int main() {
    char str[] = "Firstbit Solutions";
    char *p = mystrchr(str, 'W');
    if(p) 
		printf("Found at: %s", p);
    else
		printf("Not found");
    return 0;
}
