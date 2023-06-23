#include <stdio.h>

int findLargestNumber(int num) {
    int lg = 0;
    int dv = 1;

    while (dv <= num) {
        int truncatedNumber = (num / (dv * 10)) * dv + (num % dv);
        if (truncatedNumber > lg) {
            lg = truncatedNumber;
        }
        dv *= 10;
    }

    return lg;
}

int main() {
    int num;
    printf("Enter a 4 number: ");
    scanf("%d", &num);

    int lg = findLargestNumber(num);

    printf("Largest number by deleting a single digit: %d\n", lg);

    return 0;
}