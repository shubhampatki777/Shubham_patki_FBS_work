//Create array using malloc.
#include<stdio.h>
#include<stdlib.h> 

int main() {
    int *arr;  
    int size = 5;

    arr = (int *)malloc(size * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    printf("Alternate elements: ");
    for(int i = 0; i < size; i += 2)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
