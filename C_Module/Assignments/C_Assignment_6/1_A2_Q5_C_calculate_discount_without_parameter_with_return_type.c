#include<stdio.h>

float calculateDiscount();   // Function declaration

void main() {
    float finalPrice = calculateDiscount();   // Function call
    printf("Final Price returned = %.2f\n", finalPrice);
}

float calculateDiscount() {  // Function definition
    float price = 480, discount = 0;
    char student = 'Y';

    if(student == 'y' || student == 'Y') {
        if(price > 500)
            discount = 0.20 * price;
        else
            discount = 0.10 * price;
    } else {
        if(price > 600)
            discount = 0.15 * price;
        else
            discount = 0;
    }

    printf("Discount = %.2f\n", discount);
    return price - discount;  
}
