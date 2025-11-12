#include<stdio.h>

//function declaration(passing array to function)
void calculateSalary(float basic[], int size);

int main() {
    float basic[] = {4500, 5200, 3800, 6000, 4900};  
    int size = sizeof(basic) / sizeof(basic[0]);     

    calculateSalary(basic, size);  //function call(passing array to function)
	return 0;
}
//function definition
void calculateSalary(float basic[], int size) {
    float da, ta, hra, total;

    for(int i = 0; i < size; i++) {
        if(basic[i] <= 5000) {
            da = 0.10 * basic[i];
            ta = 0.20 * basic[i];
            hra = 0.30 * basic[i];
        } else {
            da = 0.15 * basic[i];
            ta = 0.25 * basic[i];
            hra = 0.35 * basic[i];
        }
		total = basic[i] + da + ta + hra;

        printf("\nEmployee %d:\n", i + 1);
        printf("Basic Salary = %.2f\n", basic[i]);
        printf("DA = %.2f\n", da);
        printf("TA = %.2f\n", ta);
        printf("HRA = %.2f\n", hra);
        printf("Total Salary = %.2f\n", total);
    }
}
