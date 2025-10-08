#include<stdio.h>
int main() {
	float unit, eb;
	printf("Enter total units consumed: ");
	scanf("%f", &unit);
	
	if(unit <= 50)
		eb = unit * 3.0;
	else if(unit <= 100) 
		eb = unit * 4.0;
	else 
		eb = unit * 5.0;
		
		printf("Electricity Bill = Rs. %.2f", eb);
		
		return 0;
}