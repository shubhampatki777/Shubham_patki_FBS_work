#include<stdio.h>

//function declaration (with pointer parameters,without return type)
void calculateDiscount(float *price, char *student);

void main() {
    float p = 650;
    char s = 'n';
    calculateDiscount(&p, &s);   //function call with addresses
}

//function definition
void calculateDiscount(float *price, char *student) {
    float discount = 0;

    if(*student == 'y' || *student == 'Y') {
        if(*price > 500)
            discount = 0.20 * (*price);
        else
            discount = 0.10 * (*price);
    } else {
        if(*price > 600)
            discount = 0.15 * (*price);
        else
            discount = 0;
    }
	printf("Discount = %.2f\n", discount);
    printf("Final Price = %.2f\n", *price - discount);
}
