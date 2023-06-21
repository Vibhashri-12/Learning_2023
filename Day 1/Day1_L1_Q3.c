#include <stdio.h>

// Function to calculate the total marks and percentage
void calculate_marks(float marks[], float *total, float *percentage) {
    *total = marks[0] + marks[1] + marks[2];
    *percentage = *total / 3;
}

int main() {
    // Variables declaration
    char roll_no[20];
    char name[100];
    float physics_marks, math_marks, chemistry_marks;
    float total_marks, percentage;

    // Reading input from the user
    printf("Enter Roll No: ");
    scanf("%s", roll_no);
    printf("Enter Your Name: ");
    scanf(" %[^\n]s", name);
    printf("Enter Physics Marks: ");
    scanf("%f", &physics_marks);
    printf("Enter Math Marks: ");
    scanf("%f", &math_marks);
    printf("Enter Chemistry Marks: ");
    scanf("%f", &chemistry_marks);

    // Calculating total marks and percentage
    float marks[] = {physics_marks, math_marks, chemistry_marks};
    calculate_marks(marks, &total_marks, &percentage);

    // Printing the summary
    printf("--------- Student Summary ---------\n");
    printf("Roll No: %s\n", roll_no);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physics_marks);
    printf("Math Marks: %.2f\n", math_marks);
    printf("Chemistry Marks: %.2f\n", chemistry_marks);
    printf("Total Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("-----------------------------------\n");

    return 0;
}