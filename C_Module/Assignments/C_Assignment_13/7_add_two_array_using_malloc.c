//Create array using malloc.
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *arr, *brr, *crr;
    int n = 5; 

    arr = (int *)malloc(n * sizeof(int));
    brr = (int *)malloc(n * sizeof(int));
    crr = (int *)malloc(n * sizeof(int));

    if(arr == NULL || brr == NULL || crr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }
    int tempArr[5] = {1, 2, 3, 4, 5};
    int tempBrr[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < n; i++) {
        arr[i] = tempArr[i];
        brr[i] = tempBrr[i];
    }
    printf("Sum of two arrays: ");
    for(int i = 0; i < n; i++) {
        crr[i] = arr[i] + brr[i];
        printf("%d ", crr[i]);
    }
    free(arr);
    free(brr);
    free(crr);

    return 0;
}
