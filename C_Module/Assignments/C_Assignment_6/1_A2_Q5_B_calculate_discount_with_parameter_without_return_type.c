#include<stdio.h>

void calculateDiscount(float price, char student);   // Function declaration

void main() {
    calculateDiscount(650, 'n');   // Function call with arguments
}

void calculateDiscount(float price, char student) {  // Function definition
    float discount = 0;

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
