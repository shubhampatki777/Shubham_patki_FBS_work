#include<stdio.h>

//function declaration(passing array to function)
void ageCategory(int age[],int size);

int main() {
    int age[] = {5, 16, 25, 60, 13};  
    int size = sizeof(age) / sizeof(age[0]); 

    ageCategory(age,size); //function call(passing array to function)
	return 0;
}
//function definition
void ageCategory(int age[], int size) {
    for(int i = 0; i < size; i++) {
        printf("Age %d: ", age[i]);
        if(age[i] < 12)
            printf("Child\n");
        else if(age[i] >= 12 && age[i] <= 19)
            printf("Teenager\n");
        else if(age[i] >= 20 && age[i] <= 59)
            printf("Adult\n");
        else
            printf("Senior\n");
    }
}
