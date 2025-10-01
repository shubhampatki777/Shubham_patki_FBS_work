#include<stdio.h>
int main() {
	float base = 10, height = 5, area;
	area = 0.5 * base * height;
	
	printf("Base = % .2f, Height = %.2f\n", base, height);
	printf("Area of triangle = %.2f\n", area);
	return 0;
}