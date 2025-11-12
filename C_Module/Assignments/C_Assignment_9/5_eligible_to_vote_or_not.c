#include<stdio.h>

//function declaration
void checkVote(int age[], int size);

int main() {
    int age[] = {16, 18, 25, 12, 40};  
    int size = sizeof(age) / sizeof(age[0]); 

    checkVote(age, size); //function call (passing array to function)
	return 0;
}
//function definition
void checkVote(int age[], int size) {
    for(int i = 0; i < size; i++) {
        if(age[i] >= 18)
            printf("Age %d: Eligible to Vote\n", age[i]);
        else
            printf("Age %d: Not Eligible to Vote\n", age[i]);
    }
}
