#include<stdio.h>

int triangleType();   // Function declaration

void main() {
    int result = triangleType();   // Function call
    if(result == 1)
        printf("Equilateral Triangle\n");
    else if(result == 2)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");
}

int triangleType() {  // Function definition
    int a = 5, b = 5, c = 7;

    if(a == b && b == c)
        return 1;  
    else if(a == b || b == c || a == c)
        return 2;   
    else
        return 3;   
}
