#include<stdio.h>

//function declaration(passing array to function)
void checkPrimes(int arr[],int size);

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]); 

    checkPrimes(numbers, size); //function call(passing array)
	return 0;
}
//function definition
void checkPrimes(int arr[], int size) {
    int i, j, k, flag;

    for(k = 0; k < size; k++) {
        printf("Prime numbers from 1 to %d are:\n", arr[k]);
        
        for(i = 2; i <= arr[k]; i++) {
            flag = 0;

            for(j = 2; j <= i / 2; j++) {
                if(i % j == 0) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                printf("%d ", i);
        }
        printf("\n\n");
    }
}
