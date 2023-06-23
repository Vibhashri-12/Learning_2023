// Write a function to sort the array of structures in descending order based on marks 
#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void sortStructArray(struct Student* students, int numStudents) {
    // Bubble sort algorithm
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swap the positions of two students
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void displayStructArray(const struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    int numStudents = 5;  // Specify the number of students
    struct Student students[] = {
        {1001, "John", 85.5},
        {1002, "Alice", 92.0},
        {1003, "Bob", 78.3},
        {1004, "Emily", 91.2},
        {1005, "David", 79.8}
    };

    printf("Before sorting:\n");
    displayStructArray(students, numStudents);

    sortStructArray(students, numStudents);

    printf("After sorting in descending order based on marks:\n");
    displayStructArray(students, numStudents);

    return 0;
}
