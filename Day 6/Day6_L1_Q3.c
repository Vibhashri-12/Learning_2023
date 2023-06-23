// Write a function to display all members in the above array of structures
#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

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
    int numStudents = 3;  // Specify the number of students
    struct Student students[] = {
        {1001, "John", 85.5},
        {1002, "Alice", 92.0},
        {1003, "Bob", 78.3}
    };

    displayStructArray(students, numStudents);

    return 0;
}
