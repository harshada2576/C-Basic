// pointer_basics_demo.c
#include <stdio.h>

int main(void)
{
    int num = 10; // Normal integer variable
    int *ptr;     // Pointer variable that can store address of an integer

    ptr = &num; // Store the address of num in pointer

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);

    printf("Pointer ptr stores address: %p\n", ptr);
    printf("Value at the address stored in ptr: %d\n", *ptr);

    return 0;
}