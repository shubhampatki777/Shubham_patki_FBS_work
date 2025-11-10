#include<stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {10, 20, 30, 40, 50};
    int crr[10];
    int i, j;

    for(i=0; i<5; i++)
        crr[i] = arr[i];
    for(j=0; j<5; j++)
        crr[i+j] = brr[j];

    printf("Merged array: ");
    for(int k=0; k<10; k++)
        printf("%d ", crr[k]);

    return 0;
}
