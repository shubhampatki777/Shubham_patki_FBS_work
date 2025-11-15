//Structure
//10. Product (id, name, quantity, price)
#include<stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};
void store(struct Product p[], int n) {
    for(int i=0; i<n; i++) {
        printf("Enter ID Name Quantity Price: ");
        scanf("%d %s %d %f", &p[i].id, p[i].name, &p[i].quantity, &p[i].price);
    }
}
void display(struct Product p[], int n) {
    for(int i=0; i<n; i++) {
        printf("\nID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n", p[i].id, p[i].name, p[i].quantity, p[i].price);
    }
}
void main() {
    struct Product p[2];
    store(p, 2);
    display(p, 2);
}
