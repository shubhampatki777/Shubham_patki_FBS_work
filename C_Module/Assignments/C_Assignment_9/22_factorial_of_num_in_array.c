#include<stdio.h>

//function declaration(passing array to function)
void factorial(int arr[],int size);

int main() {
    int numbers[] = {3, 5, 7};  
    int size = sizeof(numbers) / sizeof(numbers[0]);

    factorial(numbers, size); //function call(passing array)
	return 0;
}
//function definition
void factorial(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        long fact = 1;
        for(int j = 1; j <= arr[i]; j++) {
            fact = fact * j;
        }
        printf("Factorial of %d = %ld\n", arr[i], fact);
    }
}
