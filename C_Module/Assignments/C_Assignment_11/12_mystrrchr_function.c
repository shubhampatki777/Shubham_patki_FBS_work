#include<stdio.h>

char* mystrrchr(const char *str, char ch) {
    const char *last = NULL;
    while(*str) {
        if(*str == ch) 
		last = str;
        str++;
    }
    return (char*)last;
}
int main() {
    char str[] = "Firstbit Solutions";
    char *p = mystrrchr(str, 'l');
    if(p) 
		printf("Last occurrence = %s", p);
    else 
		printf("Not found");
    return 0;
}
