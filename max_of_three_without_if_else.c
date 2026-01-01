#include <stdio.h>

int main(void)
{
    int a, b, c, max;

    // Take input from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using conditional (ternary) operator to find the maximum
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Display the result
    printf("Largest number is: %d\n", max);

    return 0;
}
