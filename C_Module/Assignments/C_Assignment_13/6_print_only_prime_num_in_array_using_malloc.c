//Create array using malloc.
#include<stdio.h>
#include<stdlib.h>

int isPrime(int num) {
    if(num < 2)
        return 0;

    for(int i = 2; i * i <= num; i++)
        if(num % i == 0)
            return 0;
	return 1;
}
int main() {
    int n = 5;
    int *arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    arr[0] = 3;
    arr[1] = 4;
    arr[2] = 5;
    arr[3] = 6;
    arr[4] = 7;

    printf("Prime numbers: ");
    for(int i = 0; i < n; i++)
        if(isPrime(arr[i]))
            printf("%d ", arr[i]);

    free(arr);
    return 0;
}
