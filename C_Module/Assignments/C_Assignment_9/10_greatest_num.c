#include<stdio.h>

//function declaration(passing array to function)
void findGreatest(int nums[][3], int size);

int main() {
    int nums[][3] = {
        {25, 40, 30},
        {15, 10, 20},
        {90, 45, 60}
    };
	int size = sizeof(nums) / sizeof(nums[0]); 

    findGreatest(nums, size); //function call(passing array to function)
	return 0;
}
//function definition
void findGreatest(int nums[][3], int size) {
    for(int i = 0; i < size; i++) {
        int a = nums[i][0];
        int b = nums[i][1];
        int c = nums[i][2];

        printf("\nSet %d: %d, %d, %d\n", i + 1, a, b, c);

    	if(a > b) {
            if(a > c)
                printf("Greatest = %d\n", a);
            else
                printf("Greatest = %d\n", c);
        } else {
            if(b > c)
                printf("Greatest = %d\n", b);
            else
                printf("Greatest = %d\n", c);
        }
    }
}
