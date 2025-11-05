#include<stdio.h>

int triangleType(int a, int b, int c);   // Function declaration

void main() {
    int result = triangleType(3, 4, 5);   // Function call
    if(result == 1)
        printf("Equilateral Triangle\n");
    else if(result == 2)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");
}

int triangleType(int a, int b, int c) {  // Function definition
    if(a == b && b == c)
        return 1;   
    else if(a == b || b == c || a == c)
        return 2;  
    else
        return 3;   
}
