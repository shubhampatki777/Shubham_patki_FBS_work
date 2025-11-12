#include<stdio.h>

//function declaration(passing array to function)
void numberMenu(int num[],int choice[],int size);

int main() {
    int nums[] = {121, 17, -5, 1234};  
    int choices[] = {3, 2, 4, 6};    
    int size = sizeof(nums) / sizeof(nums[0]); 

    numberMenu(nums, choices, size); //function call(passing arrays)
    return 0;
}
//function definition
void numberMenu(int num[], int choice[], int size) {
    int temp, rev, rem, sum, flag;

    for(int k = 0; k < size; k++) {
        printf("\nFor number: %d and choice: %d\n", num[k], choice[k]);
        switch(choice[k]) {
            case 1:
                if(num[k] % 2 == 0)
                    printf("%d is Even\n", num[k]);
                else
                    printf("%d is Odd\n", num[k]);
                break;

            case 2:
                if(num[k] <= 1)
                    printf("%d is Not Prime\n", num[k]);
                else {
                    flag = 0;
                    for(int i = 2; i <= num[k] / 2; i++) {
                        if(num[k] % i == 0) {
                            flag = 1;
                            break;
                        }
                    }
                    if(flag == 0)
                        printf("%d is Prime\n", num[k]);
                    else
                        printf("%d is Not Prime\n", num[k]);
                }
                break;

            case 3:
                temp = num[k];
                rev = 0;
                while(temp != 0) {
                    rem = temp % 10;
                    rev = rev * 10 + rem;
                    temp /= 10;
                }
                if(rev == num[k])
                    printf("%d is Palindrome\n", num[k]);
                else
                    printf("%d is Not Palindrome\n", num[k]);
                break;

            case 4:
                if(num[k] > 0)
                    printf("%d is Positive\n", num[k]);
                else if(num[k] < 0)
                    printf("%d is Negative\n", num[k]);
                else
                    printf("Number is Zero\n");
                break;

            case 5:
                temp = num[k];
                rev = 0;
                while(temp != 0) {
                    rem = temp % 10;
                    rev = rev * 10 + rem;
                    temp /= 10;
                }
                printf("Reverse = %d\n", rev);
                break;

            case 6:
                temp = num[k];
                sum = 0;
                while(temp != 0) {
                    rem = temp % 10;
                    sum += rem;
                    temp /= 10;
                }
                printf("Sum of digits = %d\n", sum);
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }
}
