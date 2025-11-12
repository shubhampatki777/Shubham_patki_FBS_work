#include<stdio.h>
int main() {
    char str[] = "FIRSTBIT";
    for(int i=0; str[i]; i++) str[i] = tolower(str[i]);
    printf("Lowercase = %s", str);
    return 0;
}
