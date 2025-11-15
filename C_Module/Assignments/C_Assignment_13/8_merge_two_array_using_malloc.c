//Create array using malloc.
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *arr, *brr, *crr;
    int i, j;

    arr = (int*)malloc(5 * sizeof(int));
    brr = (int*)malloc(5 * sizeof(int));
    crr = (int*)malloc(10 * sizeof(int));

    if(arr == NULL || brr == NULL || crr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
	arr[0] = 1; arr[1] = 2; arr[2] = 3; arr[3] = 4; arr[4] = 5;
	brr[0] = 10; brr[1] = 20; brr[2] = 30; brr[3] = 40; brr[4] = 50;

    for(i = 0; i < 5; i++)
        crr[i] = arr[i];

    for(j = 0; j < 5; j++)
        crr[i + j] = brr[j];

    printf("Merged array: ");
    for(int k = 0; k < 10; k++)
        printf("%d ", crr[k]);

    free(arr);
    free(brr);
    free(crr);

    return 0;
}
