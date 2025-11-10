#include<stdio.h>

//function declaration(with pointer parameter,without return type)
void calculateSalary(float *basic);

void main() {
    float b = 4500;
    calculateSalary(&b);   //function call with address of variable 'b'
}
//function definition
void calculateSalary(float *basic) {
    float da, ta, hra, total;

    if(*basic <= 5000) {
        da = 0.10 * (*basic);
        ta = 0.20 * (*basic);
        hra = 0.30 * (*basic);
    }
	total = *basic + da + ta + hra;

    printf("Basic Salary = %.2f\n", *basic);
    printf("DA = %.2f\n", da);
    printf("TA = %.2f\n", ta);
    printf("HRA = %.2f\n", hra);
    printf("Total Salary = %.2f\n", total);
}
