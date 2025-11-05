#include<stdio.h>

void calculateDiscount();   // Function declaration

void main() {
    calculateDiscount();    // Function call
}

void calculateDiscount() {  // Function definition
    float price = 550, discount = 0;
    char student = 'y';

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
    printf("Final Price = %.2f\n", price - discount);
}
