#include <stdio.h>

void printExponent(double num) {
    unsigned long long* p = (unsigned long long*)&num; // Pointer to treat the double as unsigned long long

    unsigned long long exponent = (*p & 0x7FF0000000000000) >> 52; // Extract exponent bits
    unsigned long long exponentHex = exponent - 1023; // Convert to biased exponent
    unsigned long long exponentBinary = exponentHex & 0x7FF; // Mask out any additional bits

    printf("Exponent in Hexadecimal: 0x%llX\n", exponentHex);
    printf("Exponent in Binary: 0b");
    
    // Print the binary representation
    for (int i = 10; i >= 0; i--) {
        unsigned long long bit = (exponentBinary >> i) & 1;
        printf("%llu", bit);
    }
    
    printf("\n");
    
}

int main() {
    double x = 0.7;

    printf("Number: %lf\n", x);
    printExponent(x);

    return 0;
}
