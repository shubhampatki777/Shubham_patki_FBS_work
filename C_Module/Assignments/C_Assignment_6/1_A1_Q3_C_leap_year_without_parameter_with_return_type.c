#include<stdio.h>
int leapYear(); //function declaration
void main() {
	int result = leapYear(); //function call
	if(result == 1) 
		printf("Year is Leap Year\n");
		else 
			printf("Year is Not Leap Year\n");
}
int leapYear() { //function definition
	int year = 2024;
	if((year % 400 == 0) || (year % 4 == 0 && year %100 != 0))  
		return 1;
	else
		return 0;
}