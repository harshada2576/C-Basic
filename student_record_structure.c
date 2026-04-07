// student_record_structure.c
#include <stdio.h>

// Define structure
struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main(void)
{
    struct Student s;

    // Take input
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name); // read full name

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Display output
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}