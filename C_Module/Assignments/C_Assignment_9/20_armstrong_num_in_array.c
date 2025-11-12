#include<stdio.h>

//function declaration(passing array to function)
void checkArmstrong(int arr[], int size);

int main() {
    int numbers[] = {153, 370, 371, 407, 123};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    checkArmstrong(numbers, size); //function call(passing array)
	return 0;
}
//function definition
void checkArmstrong(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        int num = arr[i];
        int temp = num;
        int rem, sum = 0;

        while(num > 0) {
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }
        if(sum == temp)
            printf("%d is Armstrong\n", arr[i]);
        else
            printf("%d is Not Armstrong\n", arr[i]);
    }
}
