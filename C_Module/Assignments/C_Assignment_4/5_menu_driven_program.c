#include<stdio.h>

int main() {
	int choice, num, temp, rev = 0, rem, sum = 0, flag = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("\nMenu:\n");
	printf("1. Check Even or Odd\n");
	printf("2. Check Prime or Not\n");
	printf("3. Check Palindrome or Not\n");
	printf("4. Check Positive, Negative or Zero\n");
	printf("5. Reverse a Number\n");
	printf("6. Find Sum of Digits\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	switch(choice) {
		case 1: 
			if(num % 2 == 0) 
				printf("%d is Even", num);
			else {
				printf("%d is Odd", num);
				break;
			}
			case 2:
				if(num <= 1)
					printf("%d is Not Prime", num);
						else {
							flag = 0;
							for(int i = 2; i<= num / 2; i++) {
								if(num % i == 0) {
									flag = 1;
									break;
								}
							}
							if(flag == 0)
								printf("%d is Prime", num);
							else 
								printf("%d is Not Prime ", num);
							
						}
						break;
						
						case 3:
							temp = num;
							rev = 0;
							while(temp != 0) {
								rem = temp % 10;
								rev = rev * 10 + rem;
								temp /= 10;
							}
							if(rev == num)
								printf("%d is Palindrome", num);
							else 
								printf("%d is Not Palindrome", num);
								break;
								
								case 4:
									if(num > 0)
										printf("%d is Positive", num);
									else if(num < 0)
										printf("%d is Negative", num);
										else 
											printf("Number is Zero");
											break;
											
											case 5:
												temp = num;
												rev = 0;
												while(temp != 0) {
													rem = temp % 10;
													rev = rev * 10 + rem;
													temp /= 10;
												}
												printf("Reverse = %d", rev);
												break;
												
												case 6:
													temp = num;
													sum = 0;
													while(temp != 0) {
														rem = temp % 10;
														sum = 0;
														temp /=10;
													}
													printf("Sum of digits = %d", sum);
													break;
													
													default:
														printf("Invalid Choice!");
												}
												return 0;
}
