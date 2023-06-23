#include <stdio.h>
#include <limits.h>

void findSmallestLargestDigits(int n) {
    int SD = INT_MAX; //SD= smallest digit
    int LD = INT_MIN; //LD = largest digit

    for (int i = 1; i <= n; i++) {
        int num;
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        while (num != 0) {
            int digit = num % 10;

            if (digit < SD) {
                SD = digit;
            }

            if (digit > LD) {
                LD = digit;
            }

            num /= 10;
        }
    }

    if (SD == INT_MAX || LD == INT_MIN) {
        printf("Not Valid\n");
    } else {
        printf("SD: %d\n", SD);
        printf("LD: %d\n", LD);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    findSmallestLargestDigits(n);

    return 0;
}
