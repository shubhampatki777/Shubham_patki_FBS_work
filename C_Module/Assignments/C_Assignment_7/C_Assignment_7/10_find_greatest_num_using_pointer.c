#include<stdio.h>

//function declaration (with pointer parameters,without return type)
void findGreatest(int *a, int *b, int *c);

void main() {
    int x = 25, y = 40, z = 30;
    findGreatest(&x, &y, &z);   //function call with addresses
}

//function definition
void findGreatest(int *a, int *b, int *c) {
    if(*a > *b) {
        if(*a > *c)
            printf("%d is greatest\n", *a);
        else
            printf("%d is greatest\n", *c);
    } else {
        if(*b > *c)
            printf("%d is greatest\n", *b);
        else
            printf("%d is greatest\n", *c);
    }
}
