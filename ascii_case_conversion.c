// ascii_case_conversion.c
#include <stdio.h>

int main(void)
{
    char ch;

    // Take character input from user
    printf("Enter an alphabet character: ");
    scanf("%c", &ch);

    // Check if uppercase letter
    if (ch >= 'A' && ch <= 'Z')
    {
        // Convert to lowercase by adding 32
        printf("Lowercase: %c\n", ch + 32);
    }
    // Check if lowercase letter
    else if (ch >= 'a' && ch <= 'z')
    {
        // Convert to uppercase by subtracting 32
        printf("Uppercase: %c\n", ch - 32);
    }
    else
    {
        printf("Not an alphabet character.\n");
    }

    return 0;
}