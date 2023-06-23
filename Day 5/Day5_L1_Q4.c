#include <stdio.h>
#include <stdlib.h>

// Structure definition for a student
struct Student {
    int rollNumber;
    char name[50];
    int age;
};

int main() {
    int n; // Number of students
    struct Student* students; // Pointer to dynamically allocated array of students

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array of students
    students = (struct Student*)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }

    // Input data for each student
    printf("\nEnter student details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &(students[i].rollNumber));

        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter Age: ");
        scanf("%d", &(students[i].age));
    }

    // Output the data for each student
    printf("\nStudent details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
    }

    // Free dynamically allocated memory
    free(students);

    return 0;
}
