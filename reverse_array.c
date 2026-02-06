// reverse_array.c
#include <stdio.h>

int main(void)
{
    int n, i;
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

    // Reverse array logic
    for (i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Print reversed array
    printf("Reversed array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
