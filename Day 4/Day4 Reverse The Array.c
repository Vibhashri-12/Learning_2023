//Reverse The Array
#include <stdio.h>

void reverseArray(int a[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
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

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    reverseArray(a, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
