#include<stdio.h>

//function declaration(passing array to function)
void checkPalindrome(int arr[],int size);

int main() {
    int numbers[] = {121, 454, 123, 989, 777};  
    int size = sizeof(numbers) / sizeof(numbers[0]);

    checkPalindrome(numbers, size); //function call(passing array)
	return 0;
}
//function definition
void checkPalindrome(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        int num = arr[i];
        int temp = num;
        int rev = 0, rem;

        while(num > 0) {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        if(rev == temp)
            printf("%d is Palindrome\n", arr[i]);
        else
            printf("%d is Not Palindrome\n", arr[i]);
    }
}
