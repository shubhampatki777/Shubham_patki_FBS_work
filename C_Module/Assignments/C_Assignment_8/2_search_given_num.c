#include<stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int num, found = 0;

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(int i=0; i<5; i++) {
        if(arr[i] == num) {
            printf("%d found at position %d\n", num, i+1);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("%d not found in array\n", num);
	
	return 0;
}
