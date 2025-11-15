//Create array using malloc.
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *arr;
    int size = 5;
    int num,found=0;

    arr = (int *)malloc(size * sizeof(int));
	if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(int i = 0; i < size; i++) {
        if(arr[i] == num) {
            printf("%d found at position %d\n", num, i + 1);
            found=1;
            break;
        }
    }
	if(!found)
        printf("%d not found in array\n", num);

    free(arr);
    return 0;
}
