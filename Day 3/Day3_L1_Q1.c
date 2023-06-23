#include <stdio.h>

void printPattern1(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (int i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
}

void printPattern2(int n) {
    for (int i = 1; i <= n - 2; i++) {
        printf("%d", i);
        for (int j = 1; j <= 2 * (n - i) - 3; j++) {
            printf(" ");
        }
        printf("%d", i);
    }
}

void printPattern3(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
    for (int i = 2; i <= n; i++) {
        printf("%d", i);
    }
}

void generatePattern(int n) {
    for (int i = 1; i <= n; i++) {
        printPattern1(i);
        if (i < n) {
            printPattern2(n - i + 1);
        }
        printPattern3(i);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    generatePattern(n);

    return 0;
}

