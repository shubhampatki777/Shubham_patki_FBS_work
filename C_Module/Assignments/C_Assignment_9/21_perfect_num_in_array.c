#include<stdio.h>

//function declaration(passing array to function)
void checkPerfect(int arr[],int size);

int main() {
    int numbers[] = {6, 28, 12, 496, 25};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    checkPerfect(numbers, size); //function call(passing array)
    return 0;
}
//function definition
void checkPerfect(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        int sum = 0;

        for(int j = 1; j < arr[i]; j++) {
            if(arr[i] % j == 0)
                sum += j;
        }
        if(sum == arr[i])
            printf("%d is Perfect\n", arr[i]);
        else
            printf("%d is Not Perfect\n", arr[i]);
    }
}
