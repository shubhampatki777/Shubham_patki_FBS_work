#include<stdio.h>

int grade(int marks);   // Function declaration

void main() {
    int marks = 35;
    int result = grade(marks);   // Function call
    if(result == 1)
        printf("Distinction\n");
    else if(result == 2)
        printf("First Class\n");
    else if(result == 3)
        printf("Second Class\n");
    else if(result == 4)
        printf("Pass Class\n");
    else
        printf("Fail\n");
}

int grade(int marks) {  // Function definition
    if(marks > 75)
        return 1;
    else if(marks > 65)
        return 2;
    else if(marks > 55)
        return 3;
    else if(marks >= 40)
        return 4;
    else
        return 5;
}
