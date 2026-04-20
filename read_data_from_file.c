// read_data_from_file.c
#include <stdio.h>

int main(void)
{
    FILE *fp;
    char ch;

    // Open file in read mode
    fp = fopen("data.txt", "r");

    // Check if file opened successfully
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("File contents:\n");

    // Read and display file content character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}