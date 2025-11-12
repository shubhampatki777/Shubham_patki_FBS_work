#include<stdio.h>

//function declaration
void palindrome(int arr[], int size);

int main() {
    int numbers[] = {121, 345, 454, 123, 989}; 
    int size = sizeof(numbers) / sizeof(numbers[0]); 

    palindrome(numbers, size);  //function call (passing array to function)
	return 0;
}
//function definition
void palindrome(int arr[], int size) {
    int i, num, rem, rev;

    for(i = 0; i < size; i++) {
        num = arr[i];
        rev = 0;

        while(num != 0) {
            rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
        }
        if(arr[i] == rev)
            printf("%d is Palindrome\n", arr[i]);
        else
            printf("%d is Not Palindrome\n", arr[i]);
    }
}
