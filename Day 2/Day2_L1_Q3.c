#include <stdio.h>

int sumAlternateElements(int a[], int size) {
    int totalSum = 0;
    for (int i = 0; i < size; i += 2) {
        totalSum += a[i];
    }
    return totalSum;
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int size = sizeof(a) / sizeof(a[0]);

    int result = sumAlternateElements(a, size);
    printf("Sum of alternate elements: %d\n", result);

    return 0;
}