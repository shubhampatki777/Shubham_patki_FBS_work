#include<stdio.h>
int main() {
	int a, b , c;
	printf("Enter three sides of triangle: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a == b && b == c)
		printf("Equilateral Triangle");
		else if(a == b || b == c || a == c)
			printf("Isosceles Triangle");
		else 
			printf("Scalene Triangle");
			
			return 0;
}