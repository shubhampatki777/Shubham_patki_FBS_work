#include<stdio.h>
int main() {
    char str[] = "firstbit";
    for(int i=0; str[i]; i++) str[i] = toupper(str[i]);
    printf("Uppercase = %s", str);
    return 0;
}
