#include <stdio.h>

int main() {
    int choice;
    float balance = 0, amount;

    printf("Welcome to JJ Bank\n");

    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Amount deposited successfully\n");
        }
        else if (choice == 2) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > balance) {
                printf("Insufficient balance\n");
            } else {
                balance = balance - amount;
                printf("Please collect your cash\n");
            }
        }
        else if (choice == 3) {
            printf("Your current balance is: %.2f\n", balance);
        }
        else if (choice == 4) {
            printf("Thank you for using JJ Bank\n");
            break;
        }
        else {
            printf("Invalid option. Please try again\n");
        }
    }

    return 0;
}
