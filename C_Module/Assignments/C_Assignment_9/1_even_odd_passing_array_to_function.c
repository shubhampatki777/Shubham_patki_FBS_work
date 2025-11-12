#include<stdio.h>

//function declaration
void evenOdd(int arr[], int size);

int main() {
    int numbers[] = {5, 8, 13, 22, 9};  
    int size = sizeof(numbers) / sizeof(numbers[0]);  
    
	evenOdd(numbers, size);  //function call,passing array to function
	return 0;
}
//function definition
void evenOdd(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0)
            printf("%d is Even\n", arr[i]);
        else
            printf("%d is Odd\n", arr[i]);
    }
}
