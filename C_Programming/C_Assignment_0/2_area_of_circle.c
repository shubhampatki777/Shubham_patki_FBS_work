#include<stdio.h>
#define PI 3.14
int main() {
	float radius = 5.0, area;
	area = PI * radius * radius;
	printf("Area of circle with radius %.2f = %.2f\n", radius, area);
	return 0;
}