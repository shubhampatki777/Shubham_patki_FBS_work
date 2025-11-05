#include<stdio.h>
int evenOdd(); //function declaration
void main() { 
int result = evenOdd(); //function call
}
int evenOdd() { // function defination 
	int num = 4;
	if(num % 2 == 0)
		printf("%d is Even\n", num);
	else
		printf("%d is Odd\n", num);
	return 0;
}
	
