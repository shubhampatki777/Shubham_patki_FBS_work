#include<stdio.h>

//function declaration using pointers
void numberMenu(int *num, int *choice);

void main() {
    int n = 121, ch = 3;
    numberMenu(&n, &ch);   //function call with address of arguments
}

void numberMenu(int *num, int *choice) {  //function definition using pointers
    int temp, rev = 0, rem, sum = 0, flag = 0;

    switch(*choice) {   
        case 1: 
            if(*num % 2 == 0) 
                printf("%d is Even\n", *num);
            else 
                printf("%d is Odd\n", *num);
            break;

        case 2:
            if(*num <= 1)
                printf("%d is Not Prime\n", *num);
            else {
                flag = 0;
                for(int i = 2; i <= *num / 2; i++) {
                    if(*num % i == 0) {
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                    printf("%d is Prime\n", *num);
                else 
                    printf("%d is Not Prime\n", *num);
            }
            break;

        case 3:
            temp = *num;
            rev = 0;
            while(temp != 0) {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp /= 10;
            }
            if(rev == *num)
                printf("%d is Palindrome\n", *num);
            else 
                printf("%d is Not Palindrome\n", *num);
            break;

        case 4:
            if(*num > 0)
                printf("%d is Positive\n", *num);
            else if(*num < 0)
                printf("%d is Negative\n", *num);
            else 
                printf("Number is Zero\n");
            break;

        case 5:
            temp = *num;
            rev = 0;
            while(temp != 0) {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp /= 10;
            }
            printf("Reverse = %d\n", rev);
            break;

        case 6:
            temp = *num;
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
