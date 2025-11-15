//Create array using malloc.
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *arr;
    int n = 5;
    int temp;

    arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }
	arr[0] = 50;
    arr[1] = 20;
    arr[2] = 40;
    arr[3] = 10;
    arr[4] = 30;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
	printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
	return 0;
}
