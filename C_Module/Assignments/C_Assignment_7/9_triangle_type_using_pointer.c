#include<stdio.h>

//function declaration (with pointer parameters,without return type)
void triangleType(int *a, int *b, int *c);

void main() {
    int x = 5, y = 7, z = 5;
    triangleType(&x, &y, &z);   //function call with addresses
}
//function definition
void triangleType(int *a, int *b, int *c) {
    if(*a == *b && *b == *c)
        printf("Equilateral Triangle\n");
    else if(*a == *b || *b == *c || *a == *c)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");
}
