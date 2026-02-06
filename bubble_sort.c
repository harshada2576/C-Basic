// bubble_sort.c
#include <stdio.h>

int main(void)
{
    int n, i, j, temp;
    int arr[100];

    // Take number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Take array input
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort logic
    for (i = 0; i < n - 1; i++)
    {
        // Last i elements are already sorted
        for (j = 0; j < n - i - 1; j++)
        {
            // Swap if elements are in wrong order
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
