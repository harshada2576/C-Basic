// linear_search_in_array.c
#include <stdio.h>

int main(void)
{
    int n, i, key;
    int arr[100];

    // Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Take array elements as input
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Ask user for element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search logic
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element %d found at position %d\n", key, i + 1);
            return 0; // Exit once element is found
        }
    }

    // If element is not found
    printf("Element %d not found in the array\n", key);

    return 0;
}
