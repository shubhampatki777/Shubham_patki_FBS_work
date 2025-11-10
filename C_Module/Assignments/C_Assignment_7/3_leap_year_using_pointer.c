#include<stdio.h>

//function declaration
void leapYear(int *year);

void main() {
    int y = 2023;
    leapYear(&y);  //function call
}

//function definition
void leapYear(int *year) {
    if((*year % 400 == 0) || (*year % 4 == 0 && *year % 100 != 0))
        printf("%d is a Leap Year\n", *year);
    else
        printf("%d is Not a Leap Year\n", *year);
}
