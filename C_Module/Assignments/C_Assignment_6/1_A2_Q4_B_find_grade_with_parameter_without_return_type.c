#include<stdio.h>

void grade(int marks);   // Function declaration

void main() {
    grade(58);   // Function call with argument
}

void grade(int marks) {  // Function definition
    if(marks > 75)
        printf("Distinction\n");
    else if(marks > 65)
        printf("First Class\n");
    else if(marks > 55)
        printf("Second Class\n");
    else if(marks >= 40)
        printf("Pass Class\n");
    else
        printf("Fail\n");
}
