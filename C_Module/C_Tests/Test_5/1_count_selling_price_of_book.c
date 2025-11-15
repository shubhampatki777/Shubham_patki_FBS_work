/*1. WAP to calculate selling price of book based on cost price and discount.
( using function and nested if- else ) */
#include<stdio.h>

//function to calculate selling price
float calculateSellingPrice(float cost, float discount) {
    float sp;
    if(discount >= 0) {
        if(discount <= 100) {
            sp = cost - (cost * discount / 100);
        } else {
            printf("\nInvalid discount... Must be 0 to 100\n");
            sp = cost;
        }
    } else {
        printf("\nInvalid discount... Must be >= 0\n");
        sp = cost;
    }
    return sp;
}
int main() {
    float cost, discount, sp;
    
    printf("Enter Cost Price: ");
    scanf("%f", &cost);
    printf("Enter Discount: ");
    scanf("%f", &discount);

    sp = calculateSellingPrice(cost, discount);

    printf("\nSelling Price = %.2f\n", sp);
    return 0;
}
