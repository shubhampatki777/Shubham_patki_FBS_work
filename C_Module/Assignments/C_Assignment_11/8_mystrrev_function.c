#include<stdio.h>

int mystrlen(const char *s) {
    int i=0;
 	while(s[i]) 
	i++;
    return i;
}
void mystrrev(char *str) {
    int i, j; 
	char temp;
    int len = mystrlen(str);
    for(i=0, j=len-1; i<j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main() {
    char str[] = "ABCDE";
    mystrrev(str);
    printf("Reversed = %s", str);
    return 0;
}
