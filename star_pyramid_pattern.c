// star_pyramid_pattern.c
#include <stdio.h>

int main(void)
{
    int rows, i, j;

    // Ask the user for number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop controls the number of rows
    for (i = 1; i <= rows; i++)
    {

        // Inner loop prints stars in each row
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
