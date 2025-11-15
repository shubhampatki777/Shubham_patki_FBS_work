/*2. WAP to initialize some amount in your account. Then give choice to user for deposit or
withdraw. and display updated amount. Condition to withdraw (if the balance is less than
3000 display can't withdraw the amount balance is not sufficient).
( using function ) */
#include<stdio.h>

void bankMenu(float balance) {
    int choice;
    float amt;

    printf("\n1. Deposit");
    printf("\n2. Withdraw");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter amount to deposit: ");
        scanf("%f", &amt);
        balance += amt;
        printf("\nAmount Deposited Successfully!");
    }
    else if(choice == 2) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amt);
        
        if(balance < 3000) {
            printf("\nCannot withdraw! Balance is less than 3000.\n");
        } else if(amt > balance) {
            printf("\nInsufficient Balance!\n");
        } else {
            balance -= amt;
            printf("\nAmount Withdrawn Successfully!");
        }
    }
    else {
        printf("\nInvalid choice!\n");
    }
	printf("\nUpdated Balance = %.2f\n", balance);
}
int main() {
    float balance;
    printf("Enter initial amount in your account: ");
    scanf("%f", &balance);

    bankMenu(balance);
	return 0;
}
