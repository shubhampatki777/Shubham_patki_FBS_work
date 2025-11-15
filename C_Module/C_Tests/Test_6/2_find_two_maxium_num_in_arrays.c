/*WAP in C to find two maximum numbers in array */
#include<stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max1 = arr[0], max2 = -999999;

    for(i = 1; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
	printf("First maximum = %d\n", max1);
    printf("Second maximum = %d\n", max2);

    return 0;
}
