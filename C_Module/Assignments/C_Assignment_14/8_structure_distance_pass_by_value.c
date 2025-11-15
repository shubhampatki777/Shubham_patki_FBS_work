//Structure
//8. Distance ( feet, inch)
#include<stdio.h>

struct Distance {
    int feet;
    float inch;
};
void display(struct Distance d) {
    printf("\nFeet: %d\nInch: %.2f\n", d.feet, d.inch);
}
struct Distance store() {
    struct Distance d;
    printf("Enter feet and inch: ");
    scanf("%d %f", &d.feet, &d.inch);
    return d;
}
void main() {
    struct Distance d = store();
    display(d);
}
