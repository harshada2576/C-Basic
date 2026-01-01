#include <stdio.h>

int main(void)
{
    int number;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is divisible by 2
    // If remainder is 0, the number is EVEN
    if (number % 2 == 0)
    {
        printf("%d is an Even number.\n", number);
    }
    // If remainder is not 0, the number is ODD
    else
    {
        printf("%d is an Odd number.\n", number);
    }

    // Indicate successful program execution
    return 0;
}
