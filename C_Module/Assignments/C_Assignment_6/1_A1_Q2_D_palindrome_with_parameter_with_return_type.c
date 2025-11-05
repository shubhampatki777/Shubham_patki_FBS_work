#include<stdio.h>
int palindrome(int n); // function declaration
void main() {
	int num = 323;
	int result = palindrome(num); //function call
	if(result == 1) 
		printf("Number is Palindrome\n");
	else
		printf("Number is not Palindrome\n");
}

int palindrome(int n) { //function defination
	int rev, d1, d2, d3;
	
	d1 = n / 100;
	d2 = (n / 10) % 10;
	d3 = n % 10;
	
	rev = d3 * 100 + d2 * 10 + d1;
	if(n == rev) 
		return 1;
	else 
		return 0;	
}