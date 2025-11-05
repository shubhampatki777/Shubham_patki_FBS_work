#include<stdio.h>

void ageCategory();   // Function declaration

void main() {
    ageCategory();    // Function call
}

void ageCategory() {  // Function definition
    int age = 25;

    if(age < 12)
        printf("Child\n");
    else if(age >= 12 && age <= 19)
        printf("Teenager\n");
    else if(age >= 20 && age <= 59)
        printf("Adult\n");
    else
        printf("Senior\n");
}
