#include <stdio.h>

void printBits(unsigned int num) {
    int i;
    unsigned int mask = 1U << 31; 
    for (i = 0; i < 32; i++) {
        printf("%d", (num & mask) != 0); 
        mask >>= 1; 
    }

    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits representation: ");
    printBits(num);

    return 0;
}
