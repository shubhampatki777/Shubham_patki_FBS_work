#include<stdio.h>

int checkVote(int age);   // Function declaration

void main() {
    int age = 15;
    int result = checkVote(age);   // Function call
    if(result == 1)
        printf("Eligible to Vote\n");
    else
        printf("Not Eligible to Vote\n");
}

int checkVote(int age) {  // Function definition
    if(age >= 18)
        return 1;   
    else
        return 0;  
}
