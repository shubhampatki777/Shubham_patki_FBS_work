#include<stdio.h>

//function declaration(passing array to function)
void printPerfect(int arr[],int size);

int main() {
    int limits[] = {50, 100, 500};
    int size = sizeof(limits) / sizeof(limits[0]);

    printPerfect(limits, size); //function call(passing array)
    return 0;
}
//function definition
void printPerfect(int arr[],int size) {
    int i, j, k, sum;

    for(k = 0; k < size; k++) {
        printf("Perfect numbers from 1 to %d are:\n", arr[k]);

        for(i = 1; i <= arr[k]; i++) {
            sum = 0;
            for(j = 1; j < i; j++) {
                if(i % j == 0)
                    sum += j;
            }
            if(sum == i)
                printf("%d ", i);
        }
        printf("\n");
    }
}
