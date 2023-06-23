//Sum & Average of 1D Array
#include <stdio.h>

void calculateSumAndAverage(int a[], int size, int* sum, double* avr) {
    *sum = 0;
    for (int i = 0; i < size; i++) {
        *sum += a[i];
    }
    *avr = (double)(*sum) / size;
}

int main() {
    int size;
    printf("Enter size of the array:");
    scanf("%d", &size);

    int a[size];
    printf("Enter elements of the array:");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int sum;
    double avr;

    calculateSumAndAverage(a, size, &sum, &avr);

    printf("Sum of the array: %d\n", sum);
    printf("Average of the array: %.2lf\n", avr);

    return 0;
}
