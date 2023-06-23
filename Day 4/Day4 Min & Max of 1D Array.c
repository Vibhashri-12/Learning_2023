//Min & Max of 1D Array
#include <stdio.h>
#include <limits.h>

void findMinAndMax(int a[], int size, int* min, int* max) {
    *min = INT_MAX;
    *max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (a[i] < *min) {
            *min = a[i];
        }

        if (a[i] > *max) {
            *max = a[i];
        }
    }
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

    int min, max;

    findMinAndMax(a, size, &min, &max);

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}


