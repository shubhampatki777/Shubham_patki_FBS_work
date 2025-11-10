#include<stdio.h>

//function declaration
void checkVote(int *age);

void main() {
    int a = 16;
    checkVote(&a);   //function call 
}

//function definition
void checkVote(int *age) {
    if(*age >= 18)
        printf("Eligible to Vote\n");
    else
        printf("Not Eligible to Vote\n");
}
