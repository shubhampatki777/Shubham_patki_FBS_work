#include<stdio.h>

int mystrlen(const char *s) {
    int i=0; 
	while(s[i]) 
	i++;
    return i;
}
char* mystrnstr(const char *str, const char *substr, int n) {
    int sublen = mystrlen(substr);
    for(int i = 0; i <= n - sublen; i++) {
        int j;
        for(j = 0; j < sublen; j++) {
            if(str[i+j] != substr[j])
                break;
        }
        if(j == sublen)
            return (char*)&str[i];
    }
    return NULL;
}
int main() {
    char s[] = "abcdefg";
    char *p = mystrnstr(s, "cd", 5);
    if(p) 
		printf("Found: %s", p);
    else 
		printf("Not found");
    return 0;
}
