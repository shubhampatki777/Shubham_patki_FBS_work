#include<stdio.h>

void checkVote();   // Function declaration

void main() {
    checkVote();    // Function call
}

void checkVote() {  // Function definition
    int age = 20;

    if(age >= 18)
        printf("Eligible to Vote\n");
    else
        printf("Not Eligible to Vote\n");
}
