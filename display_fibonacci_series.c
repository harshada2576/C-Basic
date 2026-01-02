// display_fibonacci_series.c
#include <stdio.h>

int main(void)
{
    int n, first = 0, second = 1, next, i;

    // Ask the user for number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print Fibonacci series
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", first);

        // Calculate the next term
        next = first + second;

        // Update values for next iteration
        first = second;
        second = next;
    }

    return 0;
}
