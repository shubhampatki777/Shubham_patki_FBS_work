#include<stdio.h>

//function declaration(passing array to function)
void checkDivisible(int num[], int size);

int main() {
    int num[] = {15, 20, 9, 25, 7};  
    int size = sizeof(num) / sizeof(num[0]); 

    checkDivisible(num, size);   //function call(passing array to function)
	return 0;
}
//function definition
void checkDivisible(int num[], int size) {
    for(int i = 0; i < size; i++) {
        printf("Number %d: ", num[i]);

        if(num[i] % 3 == 0 && num[i] % 5 == 0)
            printf("Divisible by both 3 and 5\n");
        else if(num[i] % 5 == 0)
            printf("Divisible by 5 but not by 3\n");
        else if(num[i] % 3 == 0)
            printf("Divisible by 3 but not by 5\n");
        else
            printf("Divisible by none\n");
    }
}
