#include<stdio.h>

void calculateSalary();   // Function declaration

void main() {
    calculateSalary();    // Function call
}

void calculateSalary() {  // Function definition
    float basic = 4000, da, ta, hra, total;

    if(basic <= 5000) {
        da = 0.10 * basic;
        ta = 0.20 * basic;
        hra = 0.30 * basic;
    }

    total = basic + da + ta + hra;

    printf("Basic salary = %.2f\n", basic);
    printf("DA = %.2f\n", da);
    printf("TA = %.2f\n", ta);
    printf("HRA = %.2f\n", hra);
    printf("Total Salary = %.2f\n", total);
}
