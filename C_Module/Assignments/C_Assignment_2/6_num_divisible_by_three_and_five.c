#include<stdio.h>
int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num % 3 == 0 && num % 5 == 0)
		printf("Divisible by both 3 and 5");
	else if(num % 5 == 0)
		printf("Divisible by 5 but not by 3");
	else printf("Divisible by none");
	
	return 0;
}