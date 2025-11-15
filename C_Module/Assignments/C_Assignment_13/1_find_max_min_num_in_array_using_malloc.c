//Create array using malloc.
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *arr;
    int n = 5;  
    arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    arr[0] = 10;
    arr[1] = 5;
    arr[2] = 8;
    arr[3] = 3;
    arr[4] = 12;

    int min = arr[0], max = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    free(arr);
    return 0;
}
