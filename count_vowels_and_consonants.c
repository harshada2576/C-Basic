// count_vowels_and_consonants.c
#include <stdio.h>
#include <ctype.h> // for tolower()

int main(void)
{
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    // Take string input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the string
    while (str[i] != '\0')
    {

        // Convert character to lowercase
        char ch = tolower(str[i]);

        // Check if character is alphabet
        if (ch >= 'a' && ch <= 'z')
        {

            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    // Display result
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}