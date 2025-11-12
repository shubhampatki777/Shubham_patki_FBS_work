#include<stdio.h>

//function declaration(passing array to function)
void checkStrong(int arr[],int size);

int main() {
    int numbers[] = {145, 2, 40585, 123};  
    int size = sizeof(numbers) / sizeof(numbers[0]);

    checkStrong(numbers, size); //function call(passing array)
	return 0;
}
//function definition
void checkStrong(int arr[],int size) {
    for(int i = 0; i < size; i++) {
        int num = arr[i];
        int temp = num, rem, fact, sum = 0;

        while(num > 0) {
            rem = num % 10;
            fact = 1;
            for(int j = 1; j <= rem; j++) {
                fact = fact * j;
            }
            sum = sum + fact;
            num = num / 10;
        }
		if(sum == temp)
            printf("%d is Strong\n", arr[i]);
        else
            printf("%d is Not Strong\n", arr[i]);
    }
}
