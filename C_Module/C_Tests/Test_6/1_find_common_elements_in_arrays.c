/*WAP in C for to find common elements in two arrays.
e.g. arr = 1 2 3 4 5
brr = 1 6 7 3 2 */
#include<stdio.h>

int main() {
    int n1, n2, i, j;
    
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr[n1];
    
    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &arr[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int brr[n2];

    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++)
        scanf("%d", &brr[i]);

    printf("\nCommon elements are: ");
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr[i] == brr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;
}
