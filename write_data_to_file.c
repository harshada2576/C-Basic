// write_data_to_file.c
#include <stdio.h>

int main(void)
{
    FILE *fp;

    // Open file in write mode
    fp = fopen("data.txt", "w");

    // Check if file opened successfully
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Write data to file
    fprintf(fp, "Hello, this is file handling in C.\n");
    fprintf(fp, "Writing data to a file is easy!\n");

    // Close the file
    fclose(fp);

    printf("Data written to file successfully.\n");

    return 0;
}