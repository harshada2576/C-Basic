// swap_two_numbers_using_pointers.c
#include <stdio.h>

// Function to swap values using pointers
void swap(int *a, int *b) {
    int temp;

    temp = *a;   // store value of a
    *a = *b;     // assign value of b to a
    *b = temp;   // assign stored value to b
}

int main(void) {
    int x, y;

    // Take input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Call swap function and pass addresses
    swap(&x, &y);

    // Display swapped values
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}