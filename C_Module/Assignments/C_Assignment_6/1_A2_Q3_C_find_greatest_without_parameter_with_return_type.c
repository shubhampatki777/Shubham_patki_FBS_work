#include<stdio.h>

int findGreatest();   // Function declaration

void main() {
    int result = findGreatest();   // Function call
    printf("%d is greatest\n", result);
}

int findGreatest() {  // Function definition
    int a = 12, b = 18, c = 15;

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
