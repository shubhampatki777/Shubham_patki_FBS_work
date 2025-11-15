//Create array using malloc.
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *arr;
    int size = 5;

    arr = (int*)malloc(size * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    printf("Even numbers: ");
    for(int i = 0; i < size; i++)
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);

    printf("\nOdd numbers: ");
    for(int i = 0; i < size; i++)
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);

    free(arr);
    return 0;
}
