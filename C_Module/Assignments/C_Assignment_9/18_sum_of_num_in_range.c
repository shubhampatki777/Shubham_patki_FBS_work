#include<stdio.h>

//function declaration(passing array to function)
void sumRange(int start[],int end[],int size);

int main() {
    int start[] = {1, 5, 10};   
    int end[] = {3, 15, 20};   
    int size = sizeof(start) / sizeof(start[0]); 

    sumRange(start, end, size); //function call(passing arrays)
	return 0;
}
//function definition
void sumRange(int start[], int end[], int size) {
    for(int i = 0; i < size; i++) {
        int sum = 0;
        for(int j = start[i]; j <= end[i]; j++) {
            sum += j;
        }
        printf("Sum of range %d to %d = %d\n", start[i], end[i], sum);
    }
}
