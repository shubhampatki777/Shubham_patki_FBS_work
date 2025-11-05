#include<stdio.h>

void triangleType(int a, int b, int c);   // Function declaration

void main() {
    triangleType(5, 7, 5);   // Function call with arguments
}

void triangleType(int a, int b, int c) {  // Function definition
    if(a == b && b == c)
        printf("Equilateral Triangle\n");
    else if(a == b || b == c || a == c)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");
}
