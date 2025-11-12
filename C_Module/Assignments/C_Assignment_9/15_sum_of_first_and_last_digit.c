#include<stdio.h>

//function declaration(passing array to function)
void sumFirstLast(int arr[],int size);

int main() {
    int numbers[] = {5678, 9234, 1205, 705, 89};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    sumFirstLast(numbers, size); //function call(passing array to function)
	return 0;
}
//function definition
void sumFirstLast(int arr[],int size) {
    for(int i = 0; i < size; i++) {
        int n = arr[i];
        int temp = n;
        int last = temp % 10;
        while(temp >= 10) {
            temp = temp / 10;
        }
        int first = temp;
			printf("Number: %d ? Sum of first and last digit = %d\n", n, first + last);
    }
}
