#include<stdio.h>

//function declaration(passing array to function)
void printNumbers(int arr[], int size);

int main() {
    int numbers[] = {5, 10, 15}; 
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printNumbers(numbers, size); //function call(passing array to function)
    return 0;
}
//function definition
void printNumbers(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("\nNumbers from 1 to %d:\n", arr[i]);
        for(int j = 1; j <= arr[i]; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
