#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int countBitsSetInArray(int a[], int size) {
    int totalBits = 0;
    for (int i = 0; i < size; i++) {
        totalBits += countSetBits(a[i]);
    }
    return totalBits;
}

int main() {
    int a[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(a) / sizeof(a[0]);
    int result = countBitsSetInArray(a, size);
    printf("The total number of set bits in the given array is: %d\n", result);

    return 0;
}
