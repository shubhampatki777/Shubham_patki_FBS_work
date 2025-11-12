#include<stdio.h>
#include<math.h>

//function declaration(passing array to function)
void checkArmstrong(int arr[],int size);

int main() {
    int numbers[] = {153, 370, 371, 407, 123, 9474}; 
    int size = sizeof(numbers) / sizeof(numbers[0]); 

    checkArmstrong(numbers, size); //function call(passing array)
	return 0;
}
//function definition
void checkArmstrong(int arr[], int size) {
    int i, num, temp, rem, digits, sum;

    printf("Checking Armstrong numbers in array:\n");
    for(i = 0; i < size; i++) {
        num = arr[i];
        temp = num;
        sum = 0;
        digits = 0;

        int t = num;
        while(t != 0) {
            t /= 10;
            digits++;
        }
        t = num;
        while(t != 0) {
            rem = t % 10;
            sum += pow(rem, digits);
            t /= 10;
        }
        if(sum == num)
            printf("%d is an Armstrong number\n", num);
        else
            printf("%d is not an Armstrong number\n", num);
    }
}
