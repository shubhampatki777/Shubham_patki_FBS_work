#include<stdio.h>

void leapYear(); //function declaration
void main() {
	leapYear(); //function call
}
void leapYear() { // function defination
	int year = 2024;
	
	if((year % 400 == 0 || year % 4 == 0 && year % 100 !=0))
		printf("%d is Leap Year\n", year);
	else
		printf("%d is Not a Leap Year\n", year);
}