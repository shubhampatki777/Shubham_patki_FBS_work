#include<stdio.h>

//function declaration(passing arrays to function)
void calculateDiscount(float price[], char student[], int size);

int main() {
    float price[] = {650, 450, 700, 520};   
    char student[] = {'n', 'y', 'Y', 'n'}; 
    int size = sizeof(price) / sizeof(price[0]);  

    calculateDiscount(price, student, size); //function call(passing arrays)
	return 0;
}
//function definition
void calculateDiscount(float price[], char student[], int size) {
    float discount, finalPrice;

    for(int i = 0; i < size; i++) {
        discount = 0;

        if(student[i] == 'y' || student[i] == 'Y') {
            if(price[i] > 500)
                discount = 0.20 * price[i];
            else
                discount = 0.10 * price[i];
        } else {
            if(price[i] > 600)
                discount = 0.15 * price[i];
            else
                discount = 0;
        }
		finalPrice = price[i] - discount;

        printf("\nCustomer %d:\n", i + 1);
        printf("Price = %.2f\n", price[i]);
        printf("Student = %c\n", student[i]);
        printf("Discount = %.2f\n", discount);
        printf("Final Price = %.2f\n", finalPrice);
    }
}
