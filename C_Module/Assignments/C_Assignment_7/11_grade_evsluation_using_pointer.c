#include<stdio.h>

//function declaration(with pointer parameter,without return type)
void grade(int *marks);

void main() {
    int m = 58;
    grade(&m);   //function call with address of variable 'm'
}

//function definition
void grade(int *marks) {
    if(*marks > 75)
        printf("Distinction\n");
    else if(*marks > 65)
        printf("First Class\n");
    else if(*marks > 55)
        printf("Second Class\n");
    else if(*marks >= 40)
        printf("Pass Class\n");
    else
        printf("Fail\n");
}
