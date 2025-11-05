#include<stdio.h>

int checkVote();   // Function declaration

void main() {
    int result = checkVote();   // Function call
    if(result == 1)
        printf("Eligible to Vote\n");
    else
        printf("Not Eligible to Vote\n");
}

int checkVote() {  // Function definition
    int age = 20;

    if(age >= 18)
        return 1;  
    else
        return 0;  
}
