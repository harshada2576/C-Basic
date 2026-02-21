// reverse_string.c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int i, length;

    // Take string input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find string length
    length = strlen(str);

    printf("Reversed string: ");

    // Print characters in reverse order
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}