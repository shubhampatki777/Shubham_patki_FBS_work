#include<stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Alternate elements: ");
    for(int i=0; i<5; i+=2)
        printf("%d ", arr[i]);

    return 0;
}
