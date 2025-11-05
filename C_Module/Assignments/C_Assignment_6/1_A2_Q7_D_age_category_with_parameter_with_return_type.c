#include<stdio.h>

int ageCategory(int age);   // Function declaration

void main() {
    int result = ageCategory(70);   // Function call
    if(result == 1)
        printf("Child\n");
    else if(result == 2)
        printf("Teenager\n");
    else if(result == 3)
        printf("Adult\n");
    else
        printf("Senior\n");
}

int ageCategory(int age) {  // Function definition
    if(age < 12)
        return 1;
    else if(age >= 12 && age <= 19)
        return 2;
    else if(age >= 20 && age <= 59)
        return 3;
    else
        return 4;
}
