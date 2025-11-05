#include<stdio.h>
int main() {
	float celsius = 37, fahrenheit;
	fahrenheit = (celsius * 9 / 5) + 32;
	printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
	return 0; 
}