//2) Check if the array is palindrome or not(using function).

#include<stdio.h>
int isPalindrome(int arr[], int n) {
    int i, j;
    i=0;        
    j=n-1;      

    while(i < j) {
        if(arr[i] != arr[j]) {
            return 0;   
        }
        i++;
        j--;
    }
    return 1;  
}
int main() {
    int arr[50], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(isPalindrome(arr, n)) {
        printf("Array is Palindrome\n");
    } else {
        printf("Array is Not Palindrome\n");
    }
    return 0;
}
