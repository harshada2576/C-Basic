#include <stdio.h>

int main(void)
{
    int a, b, c;

    // Take input from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if 'a' is the largest
    if (a >= b && a >= c)
    {
        printf("Largest number is: %d\n", a);
    }
    // Check if 'b' is the largest
    else if (b >= a && b >= c)
    {
        printf("Largest number is: %d\n", b);
    }
    // If neither 'a' nor 'b' is largest, 'c' must be the largest
    else
    {
        printf("Largest number is: %d\n", c);
    }

    // Indicate successful program execution
    return 0;
}
