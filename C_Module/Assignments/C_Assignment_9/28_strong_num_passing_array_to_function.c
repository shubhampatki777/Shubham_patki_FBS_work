#include<stdio.h>

//function declarations(passing array to function)
int fact(int n);
void printStrong(int arr[],int size);

int main() {
    int limits[] = {100, 500};  
    int size = sizeof(limits) / sizeof(limits[0]);

    printStrong(limits, size); //function call(passing array)
    return 0;
}
int fact(int n) {
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}
void printStrong(int arr[], int size) {
    int num, rem, sum, temp;
    
    for(int k = 0; k < size; k++) {
        printf("Strong numbers from 1 to %d are:\n", arr[k]);

        for(num = 1; num <= arr[k]; num++) {
            temp = num;
            sum = 0;
            while(temp != 0) {
                rem = temp % 10;
                sum += fact(rem); //function call
                temp /= 10;
            }
            if(sum == num)
                printf("%d ", num);
        }
        printf("\n");
    }
}
