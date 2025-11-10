#include<stdio.h>

//function declaration (with pointer parameter,without return type)
void ageCategory(int *age);

void main() {
    int a = 16;
    ageCategory(&a);   //function call with address of variable 'a'
}

//function definition
void ageCategory(int *age) {
    if(*age < 12)
        printf("Child\n");
    else if(*age >= 12 && *age <= 19)
        printf("Teenager\n");
    else if(*age >= 20 && *age <= 59)
        printf("Adult\n");
    else
        printf("Senior\n");
}
