#include<stdio.h>
void evenOdd(); //function declaration
void main() {
		evenOdd(); //function call
		}
	void evenOdd() { //function def
		int num = 6;
		
	if(num % 2 == 0)
		printf("%d is Even\n", num);
	else
		printf("%d is Odd\n", num);
	
	}
	
