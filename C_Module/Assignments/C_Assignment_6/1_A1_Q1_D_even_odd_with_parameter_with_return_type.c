#include<stdio.h>
int evenOdd(int num); //function declaration
void main() {
	int num = 11;
	int result = evenOdd(num); //function call
	if(result == 0)
		printf("%d is Even\n", num);
	else
		printf("%d is Odd\n", num);
}
int evenOdd(int num) { //function defination
		if(num % 2 == 0)
			return 0;
		else 
			return 1;
}