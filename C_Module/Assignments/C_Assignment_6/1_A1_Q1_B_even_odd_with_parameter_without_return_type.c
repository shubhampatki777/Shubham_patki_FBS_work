#include<stdio.h>
void evenOdd(int num); //function declaration
void main() {
	 evenOdd(9); // function call
}
void evenOdd(int num) { //function defination

	if(num % 2 == 0)
		printf("%d is Even\n", num);
	else
		printf("%d is Odd\n", num);
	return 0;
}
	
