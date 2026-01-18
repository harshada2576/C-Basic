// find_max_element_in_array.c
#include <stdio.h>

int main(void)
{
    int n, i;
    int arr[100]; // array with maximum size 100
    int max;

    // Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Take array elements as input
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume first element is the maximum
    max = arr[0];

    // Compare with remaining elements
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Display the maximum element
    printf("Maximum element in the array is: %d\n", max);

    return 0;
}
