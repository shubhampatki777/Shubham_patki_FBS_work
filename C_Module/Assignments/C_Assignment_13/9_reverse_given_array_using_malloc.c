//Create array using malloc.
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *arr;
    int size = 5;

    arr = (int *)malloc(size * sizeof(int));
    if(arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }
	for(int i = 0; i < size; i++) {
        arr[i] = i + 1;  
    }
	printf("Reversed array: ");
    for(int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
	free(arr);
	return 0;
}
