//Structure
//9. Complex (real, imaginary)
#include<stdio.h>

struct Complex {
    float real, imaginary;
};
void store(struct Complex *c) {
    printf("Enter real and imaginary: ");
    scanf("%f %f", &c->real, &c->imaginary);
}
void display(struct Complex *c) {
    printf("\nComplex Number = %.2f + %.2fi\n", c->real, c->imaginary);
}
void main() {
    struct Complex c;
    store(&c);
    display(&c);
}
