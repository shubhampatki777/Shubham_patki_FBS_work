#include<stdio.h>

void checkVote(int age);   // Function declaration

void main() {
    checkVote(16);         // Function call with argument
}

void checkVote(int age) {  // Function definition
    if(age >= 18)
        printf("Eligible to Vote\n");
    else
        printf("Not Eligible to Vote\n");
}
