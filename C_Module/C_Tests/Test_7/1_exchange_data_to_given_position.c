/*1) Write a program to accept array and exchange the data of Xth position to Yth position.
eg. Arr[] = { 11, 23, 30, 4, 21, 45, 50}
Xth position = 3
Yth position = 5
O/p: 11 23 21 4 30 45 50 
(using function)*/

#include<stdio.h>
void exchangePositions(int arr[], int size, int x, int y) {
    int temp;
    x=x-1;
    y=y-1;

    if(x >= 0 && x < size && y >= 0 && y < size) {
        temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    } else {
        printf("Invalid positions!\n");
    }
}
int main() {
    int arr[50], n, i, x, y;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter Xth position to exchange: ");
    scanf("%d", &x);

    printf("Enter Yth position to exchange: ");
    scanf("%d", &y);

    exchangePositions(arr, n, x, y);

    printf("Array after swapping:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
