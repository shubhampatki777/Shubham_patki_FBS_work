#include<stdio.h>
int main() {
	int m1 = 80, m2 = 75, m3 = 90, C_Programming = 85, Advance_java = 70, total;
	float percentage;
	
	total = m1 + m2 + m3 + C_Programming + Advance_java;
	percentage = total / 5.0;
	
	printf("Marks: %d, %d, %d, %d, %d\n", m1, m2, m3, C_Programming, Advance_java);
	printf("Total = %d\n", total);
	printf("Percentage = %.2f%%\n", percentage);
	return 0;
}