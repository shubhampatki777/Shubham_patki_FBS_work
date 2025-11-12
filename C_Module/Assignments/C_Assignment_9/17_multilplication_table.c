#include<stdio.h>

//function declaration(passing array to function)
void multiplicationTable(int arr[],int size);

int main() {
    int numbers[] = {3, 5, 7};  
    int size = sizeof(numbers) / sizeof(numbers[0]); 

    multiplicationTable(numbers, size); //function call(passing array)
	return 0;
}
//function definition
void multiplicationTable(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("\nMultiplication Table of %d:\n", arr[i]);
        for(int j = 1; j <= 10; j++) {
            printf("%d * %d = %d\n", arr[i], j, arr[i] * j);
        }
    }
}
