#include<stdio.h>
int main() {
	int n, rev, d1, d2, d3;
	n=121;
	
	d1 = n / 100;
	d2 = (n / 10) % 10;
	d3 = n % 10;
	
	rev = d3 * 100 + d2 * 10 + d1;
	if(n == rev) 
		printf("%d is Palindrome \n", n);
		
		else 
			printf("%d is Not Palindrome\n", n);	
}