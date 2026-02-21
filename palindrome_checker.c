// palindrome_checker.c
#include <stdio.h>

int main(void)
{
    int num, original, reversed = 0, remainder;

    // Take input
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    // Check palindrome
    if (original == reversed)
    {
        printf("It is a Palindrome.\n");
    }
    else
    {
        printf("It is not a Palindrome.\n");
    }

    return 0;
}