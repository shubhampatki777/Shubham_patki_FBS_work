#include<stdio.h>
void leapYear(int year); //function declaration
void main() {
	leapYear(2023); //function call
}
void leapYear(int year) { //function definition
	if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
		printf("%d is Leap Year\n",year);
		else 
			printf("%d is Not a Leap Year\n", year);
}