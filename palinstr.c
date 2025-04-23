#include <stdio.h>
#include <string.h>
#include <stdbool.h> // Include for boolean type

void rev(char* s, int i, int j) 
{
    if (i < j) {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
        rev(s, i + 1, j - 1);
    }
}

int main()
 {
    char s[] = "dod";
    char str[strlen(s) + 1];  // Make a copy of s
    strcpy(str, s);        // Copy s into str

    rev(str, 0, strlen(str) - 1); // Reverse the copy (str)

    // Compare the reversed string (str) with the original (s)
    if (strcmp(str, s) == 0) 
	{ // Use strcmp for string comparison
        printf("string is palindrome\n");
    } 
	else
	{
        printf("string is not palindrome\n");
    }
    return 0;
}
