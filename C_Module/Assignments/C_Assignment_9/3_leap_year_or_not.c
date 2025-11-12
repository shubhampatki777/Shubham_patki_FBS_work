#include<stdio.h>

//function declaration
void leapYear(int years[], int size);

int main() {
    int years[] = {2000, 2023, 2024, 1900, 2028}; 
    int size = sizeof(years) / sizeof(years[0]); 

    leapYear(years, size);  //function call (passing array to function)
	return 0;
}
//function definition
void leapYear(int years[], int size) {
    for(int i = 0; i < size; i++) {
        if((years[i] % 400 == 0) || (years[i] % 4 == 0 && years[i] % 100 != 0))
            printf("%d is a Leap Year\n", years[i]);
        else
            printf("%d is Not a Leap Year\n", years[i]);
    }
}
