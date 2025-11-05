#include<stdio.h>
int leapYear(int year); //function declaration 
void main() {
	int year = 2025;
	int result = leapYear(year); //function call
	if(result == 1) 
		printf("%d is Leap Year\n",year);
		else 
			printf("%d is Not a Leap Year\n",year);
}
int leapYear(int year) { //function definition
	if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
			return 1;
		else 
			return 0;
}