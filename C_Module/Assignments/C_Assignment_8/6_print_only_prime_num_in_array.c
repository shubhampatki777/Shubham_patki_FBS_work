#include<stdio.h>

int isPrime(int num) {
    if(num < 2) 
		return 0;
    
	for(int i=2; i*i<=num; i++)
        if(num % i == 0)
            return 0;
    return 1;
}

int main() {
    int arr[5] = {3, 4, 5, 6, 7};

    printf("Prime numbers: ");
    for(int i=0; i<5; i++)
        if(isPrime(arr[i]))
            printf("%d ", arr[i]);

    return 0;
}
