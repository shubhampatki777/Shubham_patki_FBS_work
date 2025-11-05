#include<stdio.h>
int main() {
	float price, discount = 0 ;
	char student;
	
	printf("Enter price: ");
	scanf("%f", &price);
	printf("Are you a student (y\n)?");
	scanf("%c", &student);
	
	if(student == 'y' || student == 'Y') {
		if(price > 500)
			discount = 0.20 * price;
		else 
			discount = 0.10 * price;
	} 
	else {
		if(price > 600) 
			discount = 0.15 * price;
		else 
			discount = 0;
	}
		printf("Discount = %.2f\n", discount);
		printf("Final Price = %.2f", price - discount);
		
		return 0;
}