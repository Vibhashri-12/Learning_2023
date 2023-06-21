#include <stdio.h>

char* calculate_grade(int score) {
    if (score >= 90 && score <= 100) {
        return "Grade A";
    } else if (score >= 75 && score <= 89) {
        return "Grade B";
    } else if (score >= 60 && score <= 74) {
        return "Grade C";
    } else if (score >= 50 && score <= 59) {
        return "Grade D";
    } else if (score >= 0 && score <= 49) {
        return "Grade F";
    } else {
        return "Invalid score. Please enter a score between 0 and 100.";
    }
}

int main() {
    int score;
    printf("Enter the student's score: ");
    scanf("%d", &score);

    char* grade = calculate_grade(score);
    printf("The student's grade is: %s\n", grade);

    return 0;
}