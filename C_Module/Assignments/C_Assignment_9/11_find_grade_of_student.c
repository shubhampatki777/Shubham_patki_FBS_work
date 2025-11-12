#include<stdio.h>

//function declaration(passing array to function)
void grade(int marks[], int size);

int main() {
    int marks[] = {85, 72, 58, 43, 30};  
    int size = sizeof(marks) / sizeof(marks[0]);  

    grade(marks, size); //function call(passing array to function)
	return 0;
}
//function definition
void grade(int marks[], int size) {
    for(int i = 0; i < size; i++) {
        printf("Student %d (Marks: %d): ", i + 1, marks[i]);

        if(marks[i] > 75)
            printf("Distinction\n");
        else if(marks[i] > 65)
            printf("First Class\n");
        else if(marks[i] > 55)
            printf("Second Class\n");
        else if(marks[i] >= 40)
            printf("Pass Class\n");
        else
            printf("Fail\n");
    }
}
