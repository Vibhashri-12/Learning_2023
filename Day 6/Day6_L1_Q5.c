// Write a function to perform a search operation on the array of structures based on name of the student
#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchByName(const struct Student* students, int numStudents, const char* searchName) {
    int found = 0;

    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", searchName);
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

    const char* searchName = "Bob";

    searchByName(students, numStudents, searchName);

    return 0;
}
