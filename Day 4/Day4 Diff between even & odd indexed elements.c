//Diff between even & odd indexed elements
#include <stdio.h>

int calculateDifference(int a[], int size) {
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sumEven += a[i];
        } else {
            sumOdd += a[i];
        }
    }

    return sumEven - sumOdd;
}

int main() {
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter elements of the array:");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int difference = calculateDifference(a, size);

    printf("Diff bet sum of elements at even indices & sum of elements at odd indices: %d\n", difference);

    return 0;
}
