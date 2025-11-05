#include<stdio.h>

void findGreatest();   // Function declaration

void main() {
    findGreatest();    // Function call
}

void findGreatest() {  // Function definition
    int a = 10, b = 20, c = 15;

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
