//Create array using malloc.
#include<stdio.h>n
#include<stdlib.h>

int main() {
    int *arr;
    int i, sum = 0;

    arr = (int *)malloc(5 * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    for(i = 0; i < 5; i++)
        sum += arr[i];

    printf("Sum of all numbers = %d\n", sum);

    free(arr);
    return 0;
}
