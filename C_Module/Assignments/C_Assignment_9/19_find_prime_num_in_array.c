#include<stdio.h>

//function declaration(passing array to function)
void checkPrime(int arr[],int size);

int main() {
    int numbers[] = {3, 4, 7, 10, 17, 20}; 
    int size = sizeof(numbers) / sizeof(numbers[0]);  

    checkPrime(numbers, size); //function call(passing array)
	return 0;
}
//function definition
void checkPrime(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        int flag = 0;

        if(arr[i] <= 1)
            flag = 1;
        else {
            for(int j = 2; j <= arr[i] / 2; j++) {
                if(arr[i] % j == 0) {
                    flag = 1;
                    break;
                }
            }
        }
		if(flag == 0)
            printf("%d is Prime\n", arr[i]);
        else
            printf("%d is Not Prime\n", arr[i]);
    }
}
