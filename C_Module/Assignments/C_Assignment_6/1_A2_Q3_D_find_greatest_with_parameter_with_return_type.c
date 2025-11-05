#include<stdio.h>

int findGreatest(int a, int b, int c);   // Function declaration

void main() {
    int result = findGreatest(7, 22, 14);   // Function call
    printf("%d is greatest\n", result);
}

int findGreatest(int a, int b, int c) {  // Function definition
    if(a > b) {
        if(a > c)
            return a;
        else
            return c;
    } else {
        if(b > c)
            return b;
        else
            return c;
    }
}
