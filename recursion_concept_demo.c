// recursion_concept_demo.c
#include <stdio.h>

// Recursive function
void countdown(int n)
{

    // Base case: stop when n becomes 0
    if (n == 0)
    {
        printf("Done!\n");
        return;
    }

    // Print current number
    printf("%d\n", n);

    // Function calls itself with smaller value
    countdown(n - 1);
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    countdown(number);

    return 0;
}