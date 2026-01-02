#include <stdio.h>

int main(void)
{
    int number, i;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Loop from 1 to 10 to print the table
    for (i = 1; i <= 10; i++)
    {
        // Multiply the number with loop counter
        printf("%d x %d = %d\n", number, i, number * i);
    }

    // Indicate successful program execution
    return 0;
}
