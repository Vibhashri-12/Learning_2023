#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseStringToStructArray(const char* inputString, struct Student* students, int numStudents) {
    char* token;
    char* str = strdup(inputString);  // Create a copy of the input string to avoid modifying the original string
    int index = 0;

    // Tokenize the input string based on spaces
    token = strtok(str, " ");
    while (token != NULL && index < numStudents) {
        // Parse the token and initialize the corresponding structure members
        students[index].rollno = atoi(token);

        token = strtok(NULL, " ");
        strncpy(students[index].name, token, sizeof(students[index].name) - 1);
        students[index].name[sizeof(students[index].name) - 1] = '\0';

        token = strtok(NULL, " ");
        students[index].marks = atof(token);

        token = strtok(NULL, " ");
        index++;
    }

    free(str);  // Free the dynamically allocated string
}

int main() {
    const char* inputString = "1001 Aron 100.00";

    int numStudents = 1;  // Specify the number of students to initialize
    struct Student students[numStudents];

    parseStringToStructArray(inputString, students, numStudents);

    // Print the initialized structure members
    printf("Roll No: %d\n", students[0].rollno);
    printf("Name: %s\n", students[0].name);
    printf("Marks: %.2f\n", students[0].marks);

    return 0;
}
