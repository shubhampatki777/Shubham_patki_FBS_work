#include<stdio.h>

void findGreatest(int a, int b, int c);   // Function declaration

void main() {
    findGreatest(25, 40, 30);   // Function call with arguments
}

void findGreatest(int a, int b, int c) {  // Function definition
    if(a > b) {
        if(a > c)
            printf("%d is greatest\n", a);
        else
            printf("%d is greatest\n", c);
    } else {
        if(b > c)
            printf("%d is greatest\n", b);
        else
            printf("%d is greatest\n", c);
    }
}
