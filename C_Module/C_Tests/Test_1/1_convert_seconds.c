#include<stdio.h>
void main() {
	int hh = 1;
	int min = 10;
	int sec = 5;
	int total;

	total = hh*60*60 + min*60 + sec;
	printf("The total seconds are %d",total);	
}