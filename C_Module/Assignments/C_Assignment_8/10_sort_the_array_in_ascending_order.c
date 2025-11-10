#include<stdio.h>

int main() {
    int arr[5] = {50, 20, 40, 10, 30};
    int temp;

    for(int i=0; i<5-1; i++) {
        for(int j=i+1; j<5; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
	printf("Sorted array: ");
    for(int i=0; i<5; i++)
        printf("%d ", arr[i]);

    return 0;
}
