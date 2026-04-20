// atm_simulator.c
#include <stdio.h>

int main(void)
{
    int choice, pin = 1234, enteredPin;
    float balance = 10000, amount;

    // PIN authentication
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin)
    {
        printf("Incorrect PIN. Access denied.\n");
        return 0;
    }

    do
    {
        printf("\n=== ATM MENU ===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Current Balance: %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Amount deposited successfully.\n");
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= balance)
            {
                balance -= amount;
                printf("Please collect your cash.\n");
            }
            else
            {
                printf("Insufficient balance.\n");
            }
            break;

        case 4:
            printf("Thank you for using ATM.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}